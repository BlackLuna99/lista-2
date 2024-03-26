#include <stdio.h>

int main(){

int inicio,fim,soma=0;

puts("Escreva um numero para ser o inicio.");
scanf("%d",&inicio);
puts("Escreva um numero para ser o fim.");
scanf("%d",&fim);

for(int i=inicio;i<=fim;++i){
soma+=i;
}

printf("a media dos numeros entre %d e %d é %.2f",inicio,fim,(float)soma/((fim-inicio)+1));
return 0;
}