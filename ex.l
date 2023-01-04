#include<stdio.h> 
%}
%%
\/\/.*\n {printf("c'est un commentaire  C++ valid "); return 0; }
\/\*(.|\n)**\*\/ {printf("commentaire  C valid ");return 0;}
.+ {printf("commentaire non valide"); return 1;}
%%
int main(){
printf("ecrire un commentaire : ");

yylex();
return 0;
}
int yywrap(){
return 1;
}

