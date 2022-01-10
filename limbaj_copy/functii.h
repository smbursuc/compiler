#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <math.h>
#include <stdbool.h>
#define maxVarNR 1024
#define maxParametriFunctie 20
union tipuri_variabile
{
    int intval;
    float floatval;
    char *strval;
    int boolval;
};

struct variabila
{
    char tip[30];
    char id[30];
    int linie;
    char valoare[30];
    char identifier[30];
    char localglobal[30];
};

struct structura
{
    char id[30];
    struct variabila variabile_declarate_in_struct[100];
    int nr_variabile_declarate_struct;
};
struct array
{   
    char id[30];
    char tip[30];
    char dimensiune[30];
    struct variabila *elemente;
    int nr_curent_elemente_array;
};
struct element_array
{
    char valoare[30];
};
struct functie
{
    char tip[30];
    char id[30];
    int linie;
    struct variabila argumente_functie[30];
    int nr_argumente;
    char bloc_instructiuni[300][256];
    int nr_instructiuni;
    struct variabila variabile_declarate[200];
    int nr_variabile_declarate;
};

struct atribuire
{
    char id_st[30];
    char id_dr[30];
};

struct atribuire atribuiri_main[maxVarNR];
struct variabila variabile[maxVarNR];
struct variabila variabile_main[maxVarNR];
struct variabila variabile_functii[maxVarNR];

struct functie functii[maxVarNR];
struct functie functii_in_main[maxVarNR];
struct functie functii_definite[maxVarNR];
struct structura structuri[maxVarNR];
struct array arrays[maxVarNR];

int nr_curent_var = 0;
int nr_curent_var_main = 0;
int nr_curent_var_functii = 0;
int nr_curent_functii = 0;
int nr_curent_functii_main = 0;
int nr_curent_functii_definite = 0;
int nr_curent_atribuiri_main = 0;
int nr_curent_structuri = 0;
int nr_curent_arrays = 0;
int param_nr = 0;

const char *globalvariable_format = "(%s, %s, %s, %s)\n";
const char *localvariable_format = "(%s, %s, %s, %s)\n";
const char *function_format = "(%s, %s, %s)\n";

char buffer[100];
char buf[30];

struct eroare
{
    char mesaj[1000];
    int linie;
};

struct erori
{
    struct eroare error_list[500];
    int nrErori;
}erori_aflate_la_compilare;

typedef enum
{
    operator,
    id,
    numar,
    element_array,
    undefined
} tip;

struct nod
{
    tip type;
    char *valoare;
    struct nod *stanga;
    struct nod *dreapta;
};

struct nod *buildAST(char *valoare, struct nod *stanga, struct nod *dreapta, tip type)
{
    struct nod *nod = (struct nod *)malloc(sizeof(struct nod));
    nod->valoare = valoare;
    nod->stanga = stanga;
    nod->dreapta = dreapta;
    nod->type = type;
    return (nod);
}

int evalAST(struct nod *root)
{
    if (root == NULL)
        return 0;
    if (root->type == numar)
        return atoi(root->valoare);
    if (root->type == operator)
    {
        if (strcmp(root->valoare, "+") == 0)
            return evalAST(root->stanga) + evalAST(root->dreapta);
        if (strcmp(root->valoare, "-") == 0)
            return evalAST(root->stanga) - evalAST(root->dreapta);
        if (strcmp(root->valoare, "*") == 0)
            return evalAST(root->stanga) * evalAST(root->dreapta);
        if (strcmp(root->valoare, "/") == 0)
            return evalAST(root->stanga) / evalAST(root->dreapta);
        if (strcmp(root->valoare, "^") == 0)
            return pow(evalAST(root->stanga), evalAST(root->dreapta));
    }
    return 0;
}

void add_functie_main(char *id, int linie)
{
    strcpy(functii_in_main[nr_curent_functii_main - 1].id, id);
    functii_in_main[nr_curent_functii_main - 1].linie = linie;
}
void add_functie_argumente_main(char *tip, char *id)
{
    //printf("%s %s %d %d\n",tip,id,nr_curent_functii_main,functii_in_main[nr_curent_functii_main].nr_argumente);
    strcpy(functii_in_main[nr_curent_functii_main].argumente_functie[functii_in_main[nr_curent_functii_main].nr_argumente].tip, tip);
    strcpy(functii_in_main[nr_curent_functii_main].argumente_functie[functii_in_main[nr_curent_functii_main].nr_argumente].id, id);
}
void add_functie(char *tip, char *id, int linie)
{
    strcpy(functii[nr_curent_functii - 1].tip, tip);
    strcpy(functii[nr_curent_functii - 1].id, id);
    functii[nr_curent_functii - 1].linie = linie;
}

void add_functie_argumente(char *tip, char *id)
{
    strcpy(functii[nr_curent_functii].argumente_functie[functii[nr_curent_functii].nr_argumente].tip, tip);
    strcpy(functii[nr_curent_functii].argumente_functie[functii[nr_curent_functii].nr_argumente].id, id);
}

void adauga_atribuire(char *id_st, char *id_dr)
{
    strcpy(atribuiri_main[nr_curent_atribuiri_main++].id_st, id_st);
    strcpy(atribuiri_main[nr_curent_atribuiri_main++].id_dr, id_dr);
}

void add_functie_definite(char *tip, char *id, int linie)
{
    strcpy(functii_definite[nr_curent_functii_definite].id, id);
    strcpy(functii_definite[nr_curent_functii_definite].tip, tip);
    functii_definite[nr_curent_functii_definite].linie = linie;
}

void add_parametru_functie_definita(char *id, char *tip)
{
    strcpy(functii_definite[nr_curent_functii_definite].argumente_functie[nr_curent_functii_definite].id, id);
    strcpy(functii_definite[nr_curent_functii_definite].argumente_functie[nr_curent_functii_definite].tip, tip);
}

void add_variabila_functie_definita(char *qualifier, char *tip, char *id, char *valoare, int linie, char *localglobal)
{
    strcpy(functii_definite[nr_curent_functii_definite].variabile_declarate[functii_definite[nr_curent_functii_definite].nr_variabile_declarate].identifier, qualifier);
    strcpy(functii_definite[nr_curent_functii_definite].variabile_declarate[functii_definite[nr_curent_functii_definite].nr_variabile_declarate].id, id);
    strcpy(functii_definite[nr_curent_functii_definite].variabile_declarate[functii_definite[nr_curent_functii_definite].nr_variabile_declarate].tip, tip);
    strcpy(functii_definite[nr_curent_functii_definite].variabile_declarate[functii_definite[nr_curent_functii_definite].nr_variabile_declarate].valoare, valoare);
    functii_definite[nr_curent_functii_definite].variabile_declarate[functii_definite[nr_curent_functii_definite].nr_variabile_declarate].linie = linie;
    strcpy(functii_definite[nr_curent_functii_definite].variabile_declarate[functii_definite[nr_curent_functii_definite].nr_variabile_declarate].localglobal, localglobal);
}

/*void add_declaratii_functie_definita(char* qualifier, char* tip, char* id, int linie)
{
    char declaratie[100];
    strcpy(declaratie,qualifier);
    strcat(declaratie,tip);
    strcat(declaratie,id);
    sprintf(buf,"%s",linie);
    strcat(declaratie,buf);
    strcpy(functii_definite[nr_curent_functi_definite].bloc_instructiuni[functii_definite[nr_curent_functi_definite].nr_instructiuni],declaratie);
}*/
void verifica_daca_2_functii_au_aceeasi_semnatura()
{
    char error_list[300][256];
    char mesaj[200];
    int error_list_nr = 0;
    strcpy(mesaj, "");
    for (int i = 0; i < nr_curent_functii; i++)
    {
        for (int j = 0; j < nr_curent_functii; j++)
        {
            if (i != j)
            {   
                //printf("%s %s %s %s\n",functii[i].tip,functii[j].tip,functii[i].id,functii[j].id);
                if (strcmp(functii[i].tip, functii[j].tip) == 0 && strcmp(functii[i].id, functii[j].id) == 0 && i > j)
                {   
                    int diferit = 0;
                    //printf("%d %d\n",functii[i].nr_argumente,functii[j].nr_argumente);
                    int maxim = functii[i].nr_argumente > functii[j].nr_argumente ? functii[i].nr_argumente : functii[j].nr_argumente;
                    for (int k = 0; k < maxim; k++)
                    {   
                        //printf("%s %s %d\n",functii[i].argumente_functie[k].tip,functii[j].argumente_functie[k].tip,maxim);
                        if (strcmp(functii[i].argumente_functie[k].tip, functii[j].argumente_functie[k].tip))
                            {diferit = 1;
                    }
                    if (!diferit)
                    {
                        sprintf(mesaj, "Redeclarare functie \"%s\" (linia %d)\n", functii[i].id, functii[i].linie);
                        strcpy(error_list[error_list_nr++], mesaj);
                    }
                }
            }
        }
    }
    for (int i = 0; i < error_list_nr - 1; i++)
    {
        printf("%s", error_list[i]);
    }
    }
}
void verifica_daca_2_variabile_sunt_declarate_la_fel()
{
    int gasit = 0;
    char error_list[300][256];
    char mesaj[200];
    int error_list_nr = 0;
    strcpy(mesaj, "");
    for (int i = 0; i < nr_curent_var; i++)
    {
        for (int j = 0; j < nr_curent_var; j++)
        {
            if (i != j)
            {   
                if (strcmp(variabile[i].id, variabile[j].id) == 0 && strcmp(variabile[i].tip, variabile[j].tip) == 0 && i > j)
                {
                    sprintf(mesaj, "Redeclarare variabilei \"%s\" (linia %d)\n", variabile[i].id, variabile[i].linie);
                    strcpy(error_list[error_list_nr++], mesaj);
                }
            }
        }
    }

    for (int i = 0; i < error_list_nr; i++)
    {
        printf("%s", error_list[i]);
    }
}

void adauga_variabila(char *identifier, char *tip, char *id, char *valoare, int linie, char *localglobal)
{
    strcpy(variabile[nr_curent_var].id, id);
    strcpy(variabile[nr_curent_var].valoare, valoare);
    strcpy(variabile[nr_curent_var].tip, tip);
    strcpy(variabile[nr_curent_var].identifier, identifier);
    strcpy(variabile[nr_curent_var].localglobal, localglobal);
    variabile[nr_curent_var].linie = linie;
    nr_curent_var++;
}
void adauga_variabile_struct(char *tip, char *id, char *valoare, int linie)
{
    strcpy(structuri[nr_curent_structuri].variabile_declarate_in_struct[structuri[nr_curent_structuri].nr_variabile_declarate_struct].valoare, valoare);
    strcpy(structuri[nr_curent_structuri].variabile_declarate_in_struct[structuri[nr_curent_structuri].nr_variabile_declarate_struct].tip, tip);
    strcpy(structuri[nr_curent_structuri].variabile_declarate_in_struct[structuri[nr_curent_structuri].nr_variabile_declarate_struct].id, id);
    structuri[nr_curent_structuri].nr_variabile_declarate_struct++;
}

void adauga_struct(char *id, int linie)
{   
    strcpy(structuri[nr_curent_structuri - 1].id, id);
    strcpy(variabile[nr_curent_var].id,id);
    strcpy(variabile[nr_curent_var].tip,"struct");
    variabile[nr_curent_var].linie = linie;
    nr_curent_var++;
}

void adauga_variabile_main(char *id, int linie)
{
    strcpy(variabile_main[nr_curent_var_main].id, id);
    variabile_main[nr_curent_var_main].linie = linie;
    nr_curent_var_main++;
}
void adauga_variabile_functii(char *id, int linie)
{
    strcpy(variabile_functii[nr_curent_var_functii].id, id);
    variabile_main[nr_curent_var_functii].linie = linie;
    nr_curent_var_functii++;
}

void afiseaza_variabilele_declarate()
{
    for (int i = 0; i < nr_curent_var; i++)
    {
        printf("Variabila: %s, tip: %s, valoare: %s, linie: %d\n", variabile[i].id, variabile[i].tip, variabile[i].valoare, variabile[i].linie);
    }
}

void afiseaza_variabilele_din_main()
{
    for (int i = 0; i < nr_curent_var_main; i++)
    {
        printf("Variabila: %s, linie: %d\n", variabile_main[i].id, variabile_main[i].linie);
    }
}

void print(char *string1, char *string2)
{
    printf("%s %s\n", string1, string2);
}

void verifica_daca_variabilele_sunt_declarate()
{
    char error_list[300][256];
    char mesaj[200];
    int error_list_nr = 0;
    strcpy(mesaj, "");
    for (int i = 0; i < nr_curent_var_main; i++)
    {
        int gasit = 0;
        //printf("%s %d\n",variabile_main[i].id,i );
        for (int j = 0; j < nr_curent_var; j++)
        {
            //printf("%s %d %d\n",variabile[i].id,j,nr_curent_var);
            if (strcmp(variabile_main[i].id, variabile[j].id) == 0)
            {
                gasit = 1;
            }
        }
        if (!gasit)
        {
            sprintf(mesaj, "Variabila \"%s\" nu a fost declarata (linia %d)\n", variabile_main[i].id, variabile_main[i].linie);
            strcpy(error_list[error_list_nr++], mesaj);
        }
    }
    for (int i = 0; i < error_list_nr; i++)
    {
        printf("%s", error_list[i]);
    }
}

int vericica_daca_struct_este_declarat(char*id_struct,char*id_var)
{   for(int i=0;i<nr_curent_structuri;i++)
        if(strcmp(structuri[i].id,id_struct)==0)
            for(int j=0;j<structuri[i].nr_variabile_declarate_struct;j++)
                if(strcmp(structuri[i].variabile_declarate_in_struct[j].id,id_var)==0)
                    return 1;
    return 0;
}

int vericica_daca_array_este_declarat(char*id_array)
{
    for(int i=0; i<nr_curent_arrays;i++)
        if(strcmp(arrays[i].id,id_array)==0)
            return 1;
    return 0;

}

char *ia_tip(char *id)
{
    for (int i = 0; i < nr_curent_var; i++)
    {
        if (strcmp(variabile[i].id, id) == 0)
        {
            return variabile[i].tip;
        }
    }
    return "";
}
char *ia_tip_struct(char *id_struct, char* id_var)
{
    for(int i=0;i<nr_curent_structuri;i++)
        {
            if(strcmp(structuri[i].id,id_struct)==0)
                for (int j = 0; j < structuri[i].nr_variabile_declarate_struct; j++)
                    if(strcmp(structuri[i].variabile_declarate_in_struct[j].id,id_var)==0)
                        {
                            return structuri[i].variabile_declarate_in_struct[j].tip;
                        }

                
        }
    return "";
}

char *ia_tip_array(char*id_array)
{   
    for(int i=0; i<nr_curent_arrays; i++)
        {
            if(strcmp(arrays[i].id, id_array)==0)
                return arrays[i].tip;
        }
        return "";
}
void print_functii()
{
    for (int i = 0; i < nr_curent_functii; i++)
    {
        printf("%s %s %d ", functii[i].tip, functii[i].id, functii[i].nr_argumente);
        for (int j = 0; j < functii[i].nr_argumente; j++)
        {
            printf("%s %s ", functii[i].argumente_functie[j].tip, functii[i].argumente_functie[j].id);
        }
        printf("\n");
    }
    printf("\n");
}

void print_functii_main()
{
    for (int i = 0; i < nr_curent_functii_main; i++)
    {
        printf("%s %s %d ", functii_in_main[i].tip, functii_in_main[i].id, functii_in_main[i].nr_argumente);

        for (int j = 0; j < functii_in_main[i].nr_argumente; j++)
        {
            printf("Arg %d: %s %s ", j, functii_in_main[i].argumente_functie[j].tip, functii_in_main[i].argumente_functie[j].id);
        }
        printf("\n");
    }
    printf("\n");
}

void verifica_daca_functiile_apelate_sunt_declarate()
{
    char error_list[300][256];
    char mesaj[200];
    int error_list_nr = 0;
    strcpy(mesaj, "");
    for (int i = 0; i < nr_curent_functii_main; i++)
    {
        if (strlen(functii_in_main[i].id) > 0)
        {
            int gasit = 0;
            for (int j = 0; j < nr_curent_functii; j++)
            {

                //printf("%s %s\n", functii_in_main[i].id, functii[j].id);
                if (strcmp(functii_in_main[i].id, functii[j].id) == 0)
                {
                    int diferit = 0;
                    //printf("%d %d\n",functii[i].nr_argumente,functii[j].nr_argumente);
                    int maxim = functii_in_main[i].nr_argumente > functii[j].nr_argumente ? functii_in_main[i].nr_argumente : functii[j].nr_argumente;
                    for (int k = 0; k < maxim; k++)
                    {
                        //printf("%s %s %d\n",functii[i].argumente_functie[k].tip,functii[j].argumente_functie[k].tip,maxim);
                        if (strcmp(functii_in_main[i].argumente_functie[k].tip, functii[j].argumente_functie[k].tip))
                            diferit = 1;
                    }
                    if (!diferit)
                        gasit = 1;
                }
            }
            if (!gasit)
            {
                sprintf(mesaj, "Functia \"%s\" nu a fost declarata (linia %d)\n", functii_in_main[i].id, functii_in_main[i].linie);
                strcpy(error_list[error_list_nr++], mesaj);
            }
        }
    }
    for (int i = 0; i < error_list_nr; i++)
    {
        printf("%s", error_list[i]);
    }
}

char *itochar(int x)
{
    sprintf(buf, "%d", x);
    return buf;
}

void adauga_eroare(char* mesaj,int linie)
{
    strcpy(erori_aflate_la_compilare.error_list[erori_aflate_la_compilare.nrErori].mesaj,mesaj);
    erori_aflate_la_compilare.error_list[erori_aflate_la_compilare.nrErori].linie=linie;
    erori_aflate_la_compilare.nrErori++;
}

void afiseaza_erori_luate_la_compilare()
{
    for(int i=0;i<erori_aflate_la_compilare.nrErori;i++)
    {
        printf("%s\n",erori_aflate_la_compilare.error_list[i].mesaj);
    }

}
void check_errors()
{
    verifica_daca_functiile_apelate_sunt_declarate();
    verifica_daca_variabilele_sunt_declarate();
    verifica_daca_2_variabile_sunt_declarate_la_fel();
    verifica_daca_2_functii_au_aceeasi_semnatura();
    afiseaza_erori_luate_la_compilare();
}
void symbol_table()
{
    FILE *file;
    FILE *file2;
    file = fopen("symbol_table.txt", "w+");
    file2 = fopen("symbol_table_f.txt","w+");
    for (int i = 0; i < nr_curent_var; i++)
        fprintf(file, globalvariable_format, variabile[i].id, variabile[i].tip, variabile[i].localglobal, variabile[i].valoare);
    fprintf(file, "\n");
    for (int i = 0; i < nr_curent_functii_definite; i++)
    {
        for (int j = 0; j < functii_definite[i].nr_variabile_declarate; j++)
        {
            fprintf(file, localvariable_format, functii_definite[i].variabile_declarate[j].id, functii_definite[i].variabile_declarate[j].tip, functii_definite[i].variabile_declarate[j].localglobal, functii_definite[i].id);
        }
    }
    fprintf(file, "\n");
    for (int i = 0; i < nr_curent_functii; i++)
    {
        fprintf(file2, "(%s %s,", functii[i].id, functii[i].tip);
        for (int j = 0; j < functii[i].nr_argumente; j++)
        {
            fprintf(file2, " %s %s", functii[i].argumente_functie[j].tip, functii[i].argumente_functie[j].id);
        }
        fprintf(file2, ")");
        fprintf(file2, "\n");
    }
    fprintf(file, "\n");

    for (int i = 0; i < nr_curent_structuri; i++)
    {
        fprintf(file, "(");
        fprintf(file, "%s struct,", structuri[i].id);
        for (int j = 0; j < structuri[i].nr_variabile_declarate_struct; j++)
            fprintf(file, " %s %s %s", structuri[i].variabile_declarate_in_struct[j].tip, structuri[i].variabile_declarate_in_struct[j].id, structuri[i].variabile_declarate_in_struct[j].valoare);
        fprintf(file, ")");
        fprintf(file, "\n");
    }

    for (int i = 0; i < nr_curent_arrays; i++)
    {
        fprintf(file, "(%s array, %s, %p)\n", arrays[i].id,arrays[i].tip, arrays[i].elemente);
    }



}

void adauga_array(char *tip,char*dimensiune, char*id,int linie)
{   
    strcpy(arrays[nr_curent_arrays-1].tip,tip);
    strcpy(arrays[nr_curent_arrays-1].id,id);
    strcpy(arrays[nr_curent_arrays-1].dimensiune,dimensiune);
    if(strcmp(tip,"integer")==0)
        arrays[nr_curent_arrays-1].elemente = (struct variabila*)malloc(sizeof(int)*atoi(dimensiune));
    if(strcmp(tip,"string")==0)
        arrays[nr_curent_arrays-1].elemente = (struct variabila*)malloc(sizeof(char)*atoi(dimensiune));
    if(strcmp(tip,"boolean")==0)
        arrays[nr_curent_arrays-1].elemente = (struct variabila*)malloc(sizeof(bool)*atoi(dimensiune));
    if(strcmp(tip,"float")==0)
        arrays[nr_curent_arrays-1].elemente = (struct variabila*)malloc(sizeof(float)*atoi(dimensiune));
    strcpy(variabile[nr_curent_var].id,id);
    strcpy(variabile[nr_curent_var].tip,"array");
    variabile[nr_curent_var].linie = linie; 
    nr_curent_var++;
    
}

void update_element_array_index(char *id_array1, char *index_element1, char *id_array2,char *index_element2)
{   
    for(int i=0;i<nr_curent_arrays;i++)
        {
            if(strcmp(arrays[i].id, id_array1)==0)
                for(int j=0;j<nr_curent_arrays;j++)
                    if(strcmp(arrays[j].id, id_array2)==0)
                        strcpy(arrays[i].elemente[atoi(index_element1)].valoare, arrays[j].elemente[atoi(index_element2)].valoare);           
        }
}
void update_element_array_value(char *id_array1, char *index_element1, char *value)
{   
    for(int i=0;i<nr_curent_arrays;i++)
        {
            if(strcmp(arrays[i].id, id_array1)==0)
                {
                    strcpy(arrays[i].elemente[atoi(index_element1)].valoare,value);    
                }
        }
}



void update_valoare(char* id,char* valoare)
{
    for(int i=0;i<nr_curent_var;i++)
    {
        if(strcmp(variabile[i].id,id) == 0)
        {
            strcpy(variabile[i].valoare,valoare);
            break;
        }
    }
}

void update_valoare_struct(char *id_struct,char *id_variabila, char* valoare)
{
    for(int i=0;i<nr_curent_structuri;i++)
        {
            if(strcmp(structuri[i].id,id_struct)==0)
                for (int j = 0; j < structuri[i].nr_variabile_declarate_struct; j++)
                    if(strcmp(structuri[i].variabile_declarate_in_struct[j].id,id_variabila)==0)
                        {
                            strcpy(structuri[i].variabile_declarate_in_struct[j].valoare, valoare);
                            break;
                        }

        }
}

char* get_value(char* id)
{
    for(int i=0;i<nr_curent_var;i++)
    {
        if(strcmp(variabile[i].id,id) == 0)
        {
            return variabile[i].valoare;
        }
    }
    return NULL;
}
char* get_value_struct(char* id_struct, char* id_var)
{
    for(int i=0;i<nr_curent_structuri;i++)
        {
            if(strcmp(structuri[i].id,id_struct)==0)
                for (int j = 0; j < structuri[i].nr_variabile_declarate_struct; j++)
                    if(strcmp(structuri[i].variabile_declarate_in_struct[j].id,id_var)==0)
                        return structuri[i].variabile_declarate_in_struct[j].valoare;

        }
}
char* get_value_array(char* id_array, char* index)
{
    for(int i=0;i<nr_curent_arrays;i++)
        {
            if(strcmp(arrays[i].id,id_array)==0)
                {
                    return arrays[i].elemente[atoi(index)].valoare;
                }
        }
}

void print_variabile_din_functii_definite()
{
    for (int i = 0; i < nr_curent_functii_definite; i++)
    {
        for (int j = 0; j < functii_definite[i].nr_variabile_declarate; j++)
        {
            printf("%s %s %s ", functii_definite[i].variabile_declarate[j].tip, functii_definite[i].variabile_declarate[j].id, functii_definite[i].id);
        }
        for (int k = 0; k < functii_definite[i].nr_argumente; k++)
        {
            printf("%s %s ", functii_definite[i].argumente_functie[k].id, functii_definite[i].argumente_functie[k].tip);
        }
        printf("\n");
    }
}

void print_functii_definite()
{
    //printf("%d\n",nr_curent_functii_definite);
    for (int i = 0; i < nr_curent_functii_definite; i++)
    {
        printf("%s %s\n", functii_definite[i].id, functii_definite[i].tip);
    }
}
void print_info()
{
    afiseaza_variabilele_declarate();
    afiseaza_variabilele_din_main();
    print_functii();
    print_functii_main();
    print_functii_definite();
    print_variabile_din_functii_definite();
    symbol_table();
}
