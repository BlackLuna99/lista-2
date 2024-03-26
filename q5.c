#include <stdio.h>

int main(){

int n,maior, menor;

puts("\nEscreva um numero.");
scanf("%d",&n);

if(n==0){
    printf("Nenhum valor fornecido.\n");   
    return 0;
}

maior = menor = n;


while(n!=0){
puts("\nEscreva um numero.");
scanf("%d",&n);

if(n>maior)
    maior=n;
if(n<menor&&n!=0)
    menor=n;
}

printf("\no numero menor é %d e o maior é %d\n",menor,maior);

return 0;
}