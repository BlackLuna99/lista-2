#include <stdio.h>

int main(){

int primeiro,segundo=0;

puts("Escreva o primeiro numero.");
scanf("%d",&primeiro);
while(segundo==0){
puts("\nEscreva o segundo numero.");
puts("O numero deve ser diferente de zero.");
scanf("%d",&segundo);
}

printf("A divisão de %d por %d é %.2f.",primeiro,segundo,(float)primeiro/segundo);
return 0;
}