#!/bin/bash

bison -d limbaj.y --warning=conflicts-rr &&
flex limbaj.l &&
gcc lex.yy.c limbaj.tab.c 