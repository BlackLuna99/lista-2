#include <stdio.h>

int main(){

double soma=0,bloco=1;

for(int i=1;i<=64;++i){
soma=soma+bloco;
bloco*=2;
}

printf("O total de graos de trigo no tabuleiro de xadrez é %.0f ",soma);
return 0;
}