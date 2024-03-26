#include <stdio.h>

int main(){

int inicio,fim,progresso;

puts("Escreva um numero para ser o inicio.");
scanf("%d",&inicio);
puts("Escreva um numero para ser o fim.");
scanf("%d",&fim);

if(inicio<fim)progresso=1;
else progresso=-1;

for(int i=inicio;inicio < fim ? i <= fim : i >= fim;i+=progresso){
    if(i%4==0){
        printf("%d²=%d\n",i,i*i);
    }
}

return 0;
}