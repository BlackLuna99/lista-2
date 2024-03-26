#include <stdio.h>

int main(){

int tabuada;

puts("Qual o numero da tabuada?");
scanf("%d",&tabuada);

for(int i=1;i<=10;++i){
    printf("%d*%d=%d\n",tabuada,i,tabuada*i);

}

return 0;
}