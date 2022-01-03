#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
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

struct functie
{
    char tip[30];
    char id[30];
    int linie;
    struct variabila argumente_functie[30];
    int nr_argumente;
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

int nr_curent_var = 0;
int nr_curent_var_main = 0;
int nr_curent_var_functii = 0;
int nr_curent_functii = 0;
int nr_curent_functii_main = 0;
int nr_curent_instructiuni = 0;
int nr_curent_atribuiri_main = 0;
int param_nr = 0;

char buffer[100];
char buf[30];
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

void adauga_atribuire(char* id_st, char* id_dr)
{   strcpy(atribuiri_main[nr_curent_atribuiri_main++].id_st, id_st);
    strcpy(atribuiri_main[nr_curent_atribuiri_main++].id_dr, id_dr);
}
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
                if (strcmp(functii[i].tip, functii[j].tip) == 0 && strcmp(functii[i].id, functii[j].id) == 0 && i>j)
                {
                    int diferit = 0;
                    //printf("%d %d\n",functii[i].nr_argumente,functii[j].nr_argumente);
                    int maxim = functii[i].nr_argumente > functii[j].nr_argumente ? functii[i].nr_argumente : functii[j].nr_argumente;
                    for (int k = 0; k < maxim; k++)
                    {
                        //printf("%s %s %d\n",functii[i].argumente_functie[k].tip,functii[j].argumente_functie[k].tip,maxim);
                        if (strcmp(functii[i].argumente_functie[k].tip, functii[j].argumente_functie[k].tip))
                            diferit = 1;
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
                if (strcmp(variabile[i].id, variabile[j].id) == 0 && strcmp(variabile[i].tip, variabile[j].tip) == 0 && i<j)
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
                    if(!diferit)
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

void verifica_ca_asignarile_sa_fie_corecte()
{

}

void check_errors()
{
    verifica_daca_functiile_apelate_sunt_declarate();
    verifica_daca_variabilele_sunt_declarate();
    verifica_daca_2_variabile_sunt_declarate_la_fel();
    verifica_daca_2_functii_au_aceeasi_semnatura();
    verifica_ca_asignarile_sa_fie_corecte();
}
void symbol_table()
{
    
}
void print_info()
{
    afiseaza_variabilele_declarate();
    afiseaza_variabilele_din_main();
    print_functii();
    print_functii_main();
}
