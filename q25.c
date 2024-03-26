#include <stdio.h>


int main(){

int sinal=1,denominador=1,casas;
float pi=0;

printf("quantas casas?");
scanf("%d",&casas);

for(int i=1;i<=casas;++i){
    pi+=(float)sinal/denominador;
    sinal=-sinal;
    denominador+=2;
}
printf("\n%.*f\n",casas,4*pi);
}