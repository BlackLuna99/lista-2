#include <stdio.h>

int main(){

int exemplo=5;

printf("\npegando um numero como exemplo 5");
printf("\nse pre-incrementar negativamente ");
printf("\nele mostra o numero %d",--exemplo);
printf("\nporque ele realiza a operação antes de mostrar");
printf("\nmas no caso de pos-incrementar");
printf("\nele mostra o numero %d",exemplo--);
printf("\nporque ele realiza a operação depois de mostar");
printf("\ne na proxima vez que puxar o numero vai ser %d\n",exemplo);

return 0;
}