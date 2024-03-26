#include <stdio.h>

int main(){

int n,menor,maior;

puts("\nEscreva um numero.");
puts("\ndigite um numero negativo e par para sair");
scanf("%d",&n);

maior = menor = n;

do{
puts("\nEscreva um numero.");
scanf("%d",&n);
if (n < 0 && n % 2 == 0) break;
        

if(n>maior)
    maior=n;
if(n<menor)
    menor=n;
}while(1);

printf("\no produto do maior pelo menor é %d\n",menor*maior);

return 0;
}