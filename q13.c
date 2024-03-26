#include <stdio.h>

int main(){

int inicio,fim,progresso,soma=0;

puts("Escreva um numero para ser o inicio.");
scanf("%d",&inicio);
puts("Escreva um numero para ser o fim.");
scanf("%d",&fim);

if(inicio<fim)progresso=1;
else progresso=-1;

for(int i=inicio;inicio < fim ? i <= fim : i >= fim;i+=progresso){
soma+=i;
}
printf("a soma dos numeros de %d a %d é %d.",inicio,fim,soma);

return 0;
}