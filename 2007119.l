/* c declarations */
%{
#include <stdio.h>
#include <string.h>
#include "2007119.tab.h"
#include <math.h>
#include <stdlib.h>
%}

variable [a-zA-Z][a-zA-Z0-9]*

%%


"//".*                        { return SINGLE_COMMENT; }


"/*"([^*]|\*[^/])*"*/"         { return MULTI_COMMENT; }

"="                { return ASSIGN; }
"int"             { return INT; }
"float"           { return FLOAT; }
"char"            { return CHAR; }
[-+]?[0-9]+       { 
                        yylval.iv = atoi(yytext); 
                        return NINT; 
                    }
[-+]?[0-9]*"."[0-9]+ { 
                        yylval.fv = atof(yytext); 
                        return NFLOAT; 
                    }
"SWITCH"          { return SWITCH; }
"CASE"            { return CASE; } 
"loop"            { return Loop; }
"DEFAULT"         { return DEFAULT; }
"printkor"        { return SHOW; }
"~>"              { return st; }
"<~"              { return et; }
"!"               { return floattracker; }
"add"             { return PLUS; }
"div"               { return DIV; }
"mul"             { return MULT; }
"sub"               { return MINUS; }
"sum"             { return SUM; }
"multiply"        { return Multiply; }
"Even_Odd"        { return eo; }
"Hoieta"          { return IF; }
"Othobaeta"       { return ELSE; }

"While"           { return WHILE; }
"year"            { return YEAR; }
"palindrome"      { return pal; }
"Division"        { return division; }
"prime"           { return Prime; }
"factorial"       { return FACTORIAL; }
"power"           { return powerf; }
"SIN"             { return sine; }
"COS"             { return cose; }
"TAN"             { return tane; }
"TRIGO"           { return trigo; }
"("               { return LP; }
")"               { return RP; }
"{"               { return LB; }
"}"               { return RB; }
","               { return CM; }
";"               { return SM; }
":"               { return CC; }
"<"               { return LT; }
">"               { return GT; }
"++"              { return incre; }
"--"              { return decre; }
">="              { return gteq; }
"<="              { return lteq; }
"&&"              { return and; }
"||"              { return or; }
"=="              { return equal; }
"!="              { return notequal; }
{variable}        { yylval.sv = strdup(yytext); return VARIABLE; }
"void startkor"   { return MAIN_FUNC; }

[ \t\n]* ;

. {
    yyerror("unknown char.\n");
}

%%


int yywrap() {
    return 1;
}

int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main() {
    yyin = freopen("input.txt", "r", stdin);
    yyout = freopen("output.txt", "w", stdout);
    yyparse();
}
