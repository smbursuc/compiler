#!/bin/bash

bison -d limbaj.y &&
lex limbaj.l &&
gcc lex.yy.c limbaj.tab.c -lm