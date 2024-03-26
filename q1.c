#include <stdio.h>

int main(){

int dia=0;

while(dia<1 || dia>7){
puts("\nEscreva um numero.");
scanf("%d",&dia);

switch(dia){
    case 1:
    printf("hoje é domingo\n");
    break;
    case 2:
    printf("hoje é segunda\n");
    break;
    case 3:
    printf("hoje é terca\n");
    break;
    case 4:
    printf("hoje é quarta\n");
    break;
    case 5:
    printf("hoje é quinta\n");
    break;
    case 6:
    printf("hoje é sexta\n");
    break;
    case 7:
    printf("hoje é sabado\n");
    break;
    default:
    printf("dia invalido\n");
}
}
return 0;
}