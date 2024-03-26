#include <stdio.h>

int main(){

int f,fatorial=1;

do{
puts("\nEscreva um numero positivo.");
scanf("%d",&f);

if(f<0)
printf(" o numero deve ser positivo");
}while(f<0);

for(int i=1;i<=f;++i){
    fatorial*=i;
}
printf("o fatorial de %d é %d",f, fatorial);

return 0;
}