%{
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "functii.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
void yyerror(char * s);
int yylex();
%}
%union {
int intval;
char strval[50];
float floatval;
int boolval;
struct nod* root;
}
%token <strval>ID <strval>TIP ASSIGN <strval>INTEGER MAIN STRUCT IF ELSE FOR WHILE AND OR LT GT LTE GTE PLUS MINUS MULT SUBT EQ NEQ <strval>STRING <strval>BOOLEAN <strval>FLOAT CONST <strval>FUNCTION ARRAY PRINT
%left PLUS MINUS 
%left '^'
%left MULT SUBT
%start progr
%type <root>expresie
%type <strval>bool 
%%
progr: declaratii bloc_main lista_functii {print_info(); check_errors(); printf("\nprogram corect sintactic\n");}
     ;

declaratii:  declaratie ';'
	   | declaratii declaratie ';'
          ;

declaratie :  STRUCT ID '{' declaratii_struct '}'    { nr_curent_structuri++; adauga_struct("global",$2,yylineno); }
           | TIP ID 
          {     
               if(!exista_var($1,$2))
               adauga_variabila("public",$1,$2,"",yylineno,"global");
               else printf("Redeclararea variabilei \"%s\" (linia %d)\n",$2,yylineno);
          }
           | CONST TIP ID ASSIGN INTEGER
           {    
                if(strcmp($2,"integer") == 0)
                    adauga_variabila_const("integer",$3,$5,yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
           | CONST TIP ID ASSIGN FLOAT
           {     if(strcmp($2,"float") == 0)
                    adauga_variabila_const("float",$3,$5,yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul float (linia %d)\n",$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
           | CONST TIP ID ASSIGN STRING
           {    
                if(strcmp($2,"string") == 0)
                    adauga_variabila_const("string",$3,$5,yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul string (linia %d)\n",$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
           | CONST TIP ID ASSIGN BOOLEAN
           {    
                if(strcmp($2,"boolean") == 0)
                    adauga_variabila_const("boolean",$3,$5,yylineno,"global");
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul boolean (linia %d)\n",$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
           }
           
           | TIP ID '(' lista_param ')'
           {   
               nr_curent_functii++;
               add_functie($1,$2,yylineno);
           }
           | TIP ID '(' ')' 
           {   
               nr_curent_functii++;
               add_functie($1,$2,yylineno);
           }
           | ARRAY LT TIP ',' INTEGER GT ID 
           {   nr_curent_arrays++;
                adauga_array("global",$3,$5,$7,yylineno);
           }
           ;
declaratii_struct:  declaratie_struct ';'
	   | declaratii_struct declaratie_struct ';'
        ;
        
declaratie_struct : TIP ID 
          {
               adauga_variabile_struct($1,$2,"",yylineno);
          }
           | CONST TIP ID 
           {
                adauga_variabile_struct($2,$3,"",yylineno);
           }
           | STRUCT ID '{' declaratii_struct '}' { nr_curent_structuri++; adauga_struct("global",$2,yylineno); }
           | TIP ID '(' lista_param ')' 
           {
               nr_curent_functii++;
               add_functie($1,$2,yylineno);
           }
           | TIP ID '(' ')' 
           | ARRAY LT TIP ',' INTEGER GT ID 
           {
                nr_curent_arrays++;
                adauga_array("global",$3,$5,$7,yylineno);
           }
           ;
lista_param : param
            {
               
            }     
            | lista_param ','  param
            ;
declaratii_in_functie : TIP ID ';' 
          {
               add_variabila_functie_definita("public",$1,$2,"",yylineno,"local");
               functii_definite[nr_curent_functii_definite].nr_variabile_declarate++;
          }
           | CONST TIP ID ';' 
           {
                add_variabila_functie_definita("const",$2,$3,"",yylineno, "local");
           }
           | STRUCT ID '{' declaratii_in_functie '}'
           /*| TIP ID '(' lista_param ')' ';' 
           {
               nr_curent_functii++;
               add_functie($1,$2,yylineno);
           }*/
           | TIP ID '(' ')' ';' 
           | ARRAY LT TIP ',' INTEGER GT ID ';' 
	   ;
lista_param_functii_definite : param_fd
                             | lista_param_functii_definite ',' param_fd
                             ;
param : TIP ID
      {     
          add_functie_argumente($1,$2);
          functii[nr_curent_functii].nr_argumente++;
      }
      ; 

param_fd : TIP ID 
     {
          add_parametru_functie_definita($1,$2);
          functii_definite[nr_curent_functii_definite].nr_argumente++;
     }
     ;
conditie : ID
         | STRING
         | INTEGER
         | BOOLEAN
         | FLOAT
         | conditie LT conditie
         | conditie GT conditie
         | conditie LTE conditie
         | conditie GTE conditie
         | conditie EQ conditie
         | conditie NEQ conditie
         | conditie OR conditie
         | conditie AND conditie
         | '(' conditie ')'
         | expresie
         | bool
         ;

bool : bool '&' bool
    {
        if(strcmp($1,"false")==0 || strcmp($3,"false") == 0)
        {
            char x[30];
            strcpy(x,"false");
            char *s = strdup(x);
            strcpy($$,s);
        }
        else
        {
            char x[30];
            strcpy(x,"true");
            char *s = strdup(x);
            strcpy($$,s);
        } 
    }
    | bool '|' bool
    {
        if(strcmp($1,"true")==0 || strcmp($3,"true") == 0)
        {
            char x[30];
            strcpy(x,"true");
            char *s = strdup(x);
            strcpy($$,s);
        }
        else
        {
            char x[30];
            strcpy(x,"false");
            char *s = strdup(x);
            strcpy($$,s);
        } 
    }
    | '!' bool 
    {
        if(strcmp($2,"false")==0)
        {
            char x[30];
            strcpy(x,"true");
            char *s = strdup(x);
            strcpy($$,s);
        }
        else
        {
            char x[30];
            strcpy(x,"false");
            char *s = strdup(x);
            strcpy($$,s);
        } 
    }
    | BOOLEAN
    {
        char *s = strdup($1);
            strcpy($$,s);;
    }
    | ID
    {
        if(strcmp(ia_tip($1),"integer") == 0)
        {
            if(get_value($1)==0)
            {
                char x[30];
                strcpy(x,"false");
                char *s = strdup(x);
                strcpy($$,s);
            }
            else
            {
                char x[30];
                strcpy(x,"true");
                char *s = strdup(x);
                strcpy($$,s);
            }
        }
        else
            {
                char x[30];
                strcpy(x,"true");
                char *s = strdup(x);
                strcpy($$,s);
            }
    }
bloc_main : MAIN '{' lista_instructiuni_main '}'  
     ;

lista_functii : functie 
              | lista_functii functie 
              ;
functie : FUNCTION TIP ID '(' lista_param_functii_definite ')' bloc_functie
        {
                  add_functie_definite($2,$3,yylineno);
                  nr_curent_functii_definite++;
             
        }
        | %empty;
        ;
bloc_functie : '{' lista_instructiuni '}'  
             ;
lista_instructiuni : lista_control
                   | lista_statement
                   | declaratii_in_functie
                   | lista_instructiuni lista_control
                   | lista_instructiuni lista_statement
                   | lista_instructiuni declaratii_in_functie
                   ;
                   
lista_instructiuni_main : lista_control
                   | lista_statement
                   | declaratii
                   | lista_instructiuni_main lista_control
                   | lista_instructiuni_main lista_statement
                   | lista_instructiuni_main declaratii
                   ;
                   


/* lista instructiuni */
lista_statement :  statement ';' 
     | lista_statement statement ';'
     ;
/* instructiune */
statement: ID ASSIGN ID
         {
              if(strcmp(ia_tip($1),ia_tip($3)) == 0)
              update_valoare($1,get_value($3));
              else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are acelasi tip ca \"%s\" (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
              
         }
         | ID ASSIGN INTEGER
         {
              adauga_variabile_main($1,yylineno);
              if(strcmp(ia_tip($1),"integer") == 0)
                    update_valoare($1,$3);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",$1,yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
         | ID ASSIGN expresie
         {     
              char buf[30];
              sprintf(buf,"%d",evalAST($3));
              update_valoare($1,buf);
         }
         | ID ASSIGN FLOAT

         {    adauga_variabile_main($1,yylineno);
              if(strcmp(ia_tip($1),"float") == 0)
                    update_valoare($1,$3);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul float (linia %d)\n",$1,yylineno);
                   adauga_eroare(buf,yylineno);
              }
               
         }
         | ID ASSIGN BOOLEAN
         {    
              adauga_variabile_main($1,yylineno);
              if(strcmp(ia_tip($1),"boolean") == 0)
                    update_valoare($1,$3);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul boolean (linia %d)\n",$1,yylineno);
                   adauga_eroare(buf,yylineno);
              }
               
         }
         | ID ASSIGN '"' STRING '"'
         {
              adauga_variabile_main($1,yylineno);
              if(strcmp(ia_tip($1),"string") == 0)
                    update_valoare($1,$4);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul string (linia %d)\n",$1,yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
         | ID '.' ID ASSIGN ID '.' ID
         {    
              if(verifica_daca_struct_este_declarat($1,$3))
              {     if(verifica_daca_struct_este_declarat($5,$7))
                   {
                        if(strcmp(ia_tip_struct($1,$3),ia_tip_struct($5,$7)) == 0)
                              update_valoare_struct($1,$3,$7);
                         else
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu are acelasi tip ca \"%s\" (linia %d)\n",$3,$7,yylineno);
                         adauga_eroare(buf,yylineno);
                    }
                    
                    }
                    else
                    {
                         char buf[500];
                         sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$5,$7,yylineno);
                         adauga_eroare(buf,yylineno);
                    }
                    
               }
              else
                    {char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);}
         }
         | ID '.' ID ASSIGN INTEGER

         {
              if(verifica_daca_struct_este_declarat($1,$3))
              {
              if(strcmp(ia_tip_struct($1,$3),"integer") == 0)
                    update_valoare_struct($1,$3,$5);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul integer (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
         | ID '.' ID ASSIGN FLOAT

         {
              if(verifica_daca_struct_este_declarat($1,$3))
              {
              if(strcmp(ia_tip_struct($1,$3),"float") == 0)
                    update_valoare_struct($1,$3,$5);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul float (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
         | ID '.' ID ASSIGN BOOLEAN
         {
              if(verifica_daca_struct_este_declarat($1,$3))
              {
              if(strcmp(ia_tip_struct($1,$3),"boolean") == 0)
                    update_valoare_struct($1,$3,$5);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul boolean (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
         | ID '.' ID ASSIGN '"' STRING '"'
         {
              if(verifica_daca_struct_este_declarat($1,$3))
              {
              if(strcmp(ia_tip_struct($1,$3),"boolean") == 0)
                    update_valoare_struct($1,$3,$6);
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul string (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
         }
         | ID '.' ID ASSIGN expresie
         {     if(verifica_daca_struct_este_declarat($1,$3))
              {
              if(strcmp(ia_tip_struct($1,$3),"integer") == 0)
                         {char buf[30];
               sprintf(buf,"%d",evalAST($5));
               update_valoare_struct($1,$3,buf);}
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s.%s\" nu are tipul integer (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }

              
         }
         | ID '[' INTEGER ']' ASSIGN ID '[' INTEGER ']'

         {    
              if(verifica_daca_array_este_declarat($1))
                    {if(verifica_daca_array_este_declarat($6))
                         {
                         if(strcmp(ia_tip_array($1),ia_tip_array($6))==0)
                              update_element_array_index($1,$3,$6,$8);
                         else
                              {
                                   char buf[500];
                                   sprintf(buf,"\"%s\" nu are acelasis tip ca \"%s\" (linia %d)\n",$1,$6,yylineno);
                                   adauga_eroare(buf,yylineno);
                              }
                         }
                    else
                         {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",$6,yylineno);
                         adauga_eroare(buf,yylineno);
                         }
                    }
                    else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",$1,yylineno);
                         adauga_eroare(buf,yylineno);
                    }
 
         }
         | ID '[' INTEGER ']' ASSIGN INTEGER
          {    if(verifica_daca_array_este_declarat($1))    
                         if(strcmp(ia_tip_array($1),"integer")==0)
                              update_element_array_value($1,$3,$6);
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",$1,yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",$1,yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
         | ID '[' INTEGER ']' ASSIGN '"' STRING '"'
         {    if(verifica_daca_array_este_declarat($1))    
                         if(strcmp(ia_tip_array($1),"string")==0)
                              update_element_array_value($1,$3,$7);
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul string (linia %d)\n",$1,yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",$1,yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
         | ID '[' INTEGER ']' ASSIGN FLOAT
         {    if(verifica_daca_array_este_declarat($1))    
                         if(strcmp(ia_tip_array($1),"float")==0)
                              update_element_array_value($1,$3,$6);
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul float (linia %d)\n",$1,yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",$1,yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
         | ID '[' INTEGER ']' ASSIGN BOOLEAN
         {    if(verifica_daca_array_este_declarat($1))    
                         if(strcmp(ia_tip_array($1),"boolean")==0)
                              update_element_array_value($1,$3,$6);
                         else
                         {
                              char buf[500];
                              sprintf(buf,"\"%s\" nu are tipul boolean (linia %d)\n",$1,yylineno);
                              adauga_eroare(buf,yylineno);
                         }
                    
               else 
                    {
                         char buf[500];
                         sprintf(buf,"\"%s\" nu este declarat (linia %d)\n",$1,yylineno);
                         adauga_eroare(buf,yylineno);
                    }

          }
         | ID '[' INTEGER ']' ASSIGN expresie
         {     if(verifica_daca_array_este_declarat($1))
              {
              if(strcmp(ia_tip_array($1),"integer") == 0)
                         {char buf[30];
                         sprintf(buf,"%d",evalAST($6));
                         update_element_array_value($1,$3,buf);}
               else
              {
                   char buf[500];
                   sprintf(buf,"\"%s\" nu are tipul integer (linia %d)\n",$1,yylineno);
                   adauga_eroare(buf,yylineno);
              }
              }
              else 
              {     
                    char buf[500];
                   sprintf(buf,"\"%s.%s\" nu este declarat (linia %d)\n",$1,$3,yylineno);
                   adauga_eroare(buf,yylineno);
              }

              
         }
         | ID '(' lista_apel ')'
         {
              nr_curent_functii_main++;
              add_functie_main($1,yylineno);
         }
         | PRINT '(' expresie ')'
         {
              printf("%d\n",evalAST($3));
         }
         | PRINT '(' bool ')' 
         {
              printf("%s\n",$3);
         }
         ;
expresie : '(' expresie ')' '^' expresie
         {
              $$=buildAST("^",$2,$5,operator);
         }
         | expresie '^' expresie
         {
              $$=buildAST("^",$1,$3,operator);
         }
         | '(' expresie PLUS expresie ')'
         {
              $$=buildAST("+",$2,$4,operator);
         }
         | '(' expresie MINUS expresie ')'
         {
              $$=buildAST("-",$2,$4,operator);
         }
         | '(' expresie MULT expresie ')'
         {
              $$=buildAST("*",$2,$4,operator);
         }
         | '(' expresie SUBT expresie ')'
         {
              $$=buildAST("/",$2,$4,operator);
         }
         | expresie MULT expresie
         {
              $$=buildAST("*",$1,$3,operator);
         }
         | expresie SUBT expresie
         {
              $$=buildAST("/",$1,$3,operator);
         }
         | expresie MINUS expresie
         {
              $$=buildAST("-",$1,$3,operator);
              //printf("Arg: %s %s %s\n",$1->valoare,"-",$3->valoare);
         }
         | expresie PLUS expresie
         {
              $$=buildAST("+",$1,$3,operator);
         }
         | ID '.' ID
         {
              char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value_struct($1,$3));
               $$=buildAST(s,NULL,NULL,numar);
         }
         | ID
         {     char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value($1));
               $$=buildAST(s,NULL,NULL,numar);

         }
         | INTEGER
         {
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",$1);
               $$=buildAST(s,NULL,NULL,numar);
         }
         | ID '[' INTEGER ']'
         {
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s",get_value_array($1,$3));
               $$=buildAST(s,NULL,NULL,numar);
         }
         | ID '(' lista_apel ')'
         {     
               char* s = (char*)malloc(sizeof(char)*(10));
               sprintf(s,"%s","0");
               $$=buildAST(s,NULL,NULL,numar);
              
         }
         ;

control : IF '(' conditie ')' '{' lista_instructiuni '}'
        | IF '(' conditie ')' ELSE '{' lista_instructiuni '}'
        | FOR '(' statement ';' conditie ';' statement ')' '{' lista_instructiuni '}'
        | WHILE '(' conditie ')' '{' lista_instructiuni '}'
        ;

lista_control : control
              | lista_control control
              ;

lista_apel : tipuri
           {
               //printf("%s\n",verifica_daca_functia_apelata_e_declarata_sau_corecta());
           }
           | lista_apel ',' tipuri
           ;
tipuri : INTEGER
       {  
          add_functie_argumente_main("integer",$1);
          functii_in_main[nr_curent_functii_main].nr_argumente++;
       }
       | ID{
       }
       ;
%%
void yyerror(char * s){
  printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
  yyin=fopen(argv[1],"r");
  yyparse();
} 
