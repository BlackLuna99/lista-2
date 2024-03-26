#include <stdio.h>

int main(){

int numero,contador=0,digito;

puts("Escreva um numero para ser o inicio.");
scanf("%d",&numero);

while(numero!=0){
    if(numero%10==7)
    contador++;

    numero/=10;
}

printf("a quantidade de digitos 7 é %d\n",contador);

return 0;
}