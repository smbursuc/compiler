%{
#include <stdio.h>
#include <string.h>
#include "functii.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
void yyerror(char * s);
int yylex();
%}
%union {
int intval;
char strval[2048];
float floatval;
int boolval;
}
%token <strval>ID <strval>TIP ASSIGN <strval>INTEGER MAIN STRUCT IF ELSE FOR WHILE AND OR LT GT LTE GTE PLUS MINUS MULT SUBT EQ NEQ <strval>STRING <boolval>BOOLEAN <floatval>FLOAT CONST <strval>FUNCTION ARRAY
%left PLUS
%left MINUS
%left MULT
%left SUBT
%left ASSIGN
%left AND
%left OR
%left LT GT EQ NEQ
%start progr
%%
progr: declaratii bloc_main lista_functii {printf("\nprogram corect sintactic\n"); print_info(); check_errors();}
     ;

declaratii :  declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIP ID
          {
               adauga_variabila("public",$1,$2,"",yylineno);
          }
           | CONST TIP ID
           {
                adauga_variabila("const",$2,$3,"",yylineno);
           }
           | STRUCT ID '{' declaratii '}'
           | TIP ID '(' lista_param ')'
           {
               nr_curent_functii++;
               add_functie($1,$2,yylineno);
           }
           | TIP ID '(' ')'
           | ARRAY LT TIP ',' INTEGER GT ID
           ;
lista_param : param
            {
               
            }     
            | lista_param ','  param
            ;
            
param : TIP ID
      {     
          add_functie_argumente($1,$2);
          functii[nr_curent_functii].nr_argumente++;
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
         ;
/* bloc */
bloc : '{' lista_instructiuni '}'  
     ;

bloc_main : MAIN '{' lista_instructiuni '}'  
     ;

lista_functii : functie
              | lista_functii functie
              ;

functie : FUNCTION TIP ID '(' lista_param ')' bloc
        {

        }
        | %empty;
        ;

lista_instructiuni : lista_control
                   | lista_statement
                   | declaratii
                   | lista_instructiuni lista_control
                   | lista_instructiuni lista_statement
                   | lista_instructiuni declaratii
                   ;
/* lista instructiuni */
lista_statement :  statement ';' 
     | lista_statement statement ';'
     ;

/* instructiune */
statement: ID ASSIGN ID
         {
              
         }
         | ID ASSIGN INTEGER
         {
              adauga_variabile_main($1,yylineno);
         }
         | ID ASSIGN expresie
         {
              
         }
         | ID ASSIGN FLOAT
         | ID ASSIGN BOOLEAN
         | ID ASSIGN '"' STRING '"' 
         | ID '.' ID ASSIGN ID '.' ID
         | ID '.' ID ASSIGN INTEGER
         | ID '.' ID ASSIGN FLOAT
         | ID '.' ID ASSIGN BOOLEAN
         | ID '.' ID ASSIGN '"' STRING '"' 	 
         | ID '[' INTEGER ']' ASSIGN ID '[' INTEGER ']'
         | ID '[' INTEGER ']' ASSIGN INTEGER
         | ID '[' INTEGER ']' ASSIGN '"' STRING '"'
         | ID '[' INTEGER ']' ASSIGN FLOAT
         | ID '[' INTEGER ']' ASSIGN BOOLEAN
         | ID '[' INTEGER ']' ASSIGN expresie
         | ID '(' lista_apel ')'
         {
              nr_curent_functii_main++;
              add_functie_main($1,yylineno);
         }
         ;
expresie : expresie PLUS expresie
         | expresie MINUS expresie
         | expresie MULT expresie
         | expresie SUBT expresie
         | '(' expresie ')'
         | ID
         | INTEGER
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
       ;
%%
void yyerror(char * s){
  printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
  yyin=fopen(argv[1],"r");
  yyparse();
} 