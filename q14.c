#include <stdio.h>

int main(){

int inicio,fim,progresso,quantidade=0;

puts("Escreva um numero para ser o inicio.");
scanf("%d",&inicio);
puts("Escreva um numero para ser o fim.");
scanf("%d",&fim);

if(inicio<fim)progresso=1;
else progresso=-1;

for(int i=inicio;inicio < fim ? i <= fim : i >= fim;i+=progresso){
    if(i%3==0) quantidade++;
}
printf("\nA quantidade de numeros divisiveis por 3 entre %d a %d é %d.\n",inicio,fim,quantidade);
return 0;
}