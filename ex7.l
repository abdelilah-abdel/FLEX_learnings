%{
#include<stdio.h> 
%}
%%
\+|\-|\*|\/ {printf("operateur arithmetique : %s",yytext); return 0; }
FF+|F{2,} {printf("une suite de F : %s ",yytext); return 0;}
ab(ab)+|(ab){2,} {printf("suite de 'ab' ou plus : %s",yytext);return 0;}
[a-zA-Z0-9]{5} {printf("suite de lettres et chiffres de longeur 5");}
0|[1-9][0-9]*0 {printf("entier multiple de 10");}
\".*\" {printf("une chaine de char en language C");} 
. {printf("caractere non reconu"); return 1;}
%%
int main(){
printf("ecrire un commentaire : ");

yylex();
return 0;
}
int yywrap(){
return 1;
}

