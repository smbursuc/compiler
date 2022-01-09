%{
#include <stdio.h>
#include "limbaj.tab.h"
%}
%option noyywrap
%%
"integer"|"float"|"string"|"boolean" {strcpy(yylval.strval, yytext); return TIP;}
"print" {return PRINT;}
"function" {return FUNCTION;}
"array" {return ARRAY;}
"structure" {return STRUCT;}
"const" {return CONST;}
"main" {return MAIN;}
"true"|"false" {return BOOLEAN;}
"<-" {return ASSIGN;}
"if" {return IF;}
"else" {return ELSE;}
"for" {return FOR;}
"while" {return WHILE;}
"&&" {return AND;}
"||" {return OR;}
"<" {return LT;}
">" {return GT;}
"<=" {return LTE;}
">=" {return GTE;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MULT;}
"/" {return SUBT;}
"==" {return EQ;}
"!=" {return NEQ;}
[a-zA-Z][0-9]? {strcpy(yylval.strval, yytext); return ID;}
[0-9]+ {strcpy(yylval.strval, yytext); return INTEGER;}
[0-9]+\.[0-9]+ {strcpy(yylval.strval, yytext); return FLOAT;}
[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.strval, yytext); return STRING;}
[ \t] ;
\n {yylineno++;}
\r ;
. {return yytext[0];}
