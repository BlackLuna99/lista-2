#include <stdio.h>

int main(){

double soma=0,bloco=1;

for(int i=1;i<=10;++i){
if(i%2==1){
    int fatorial=1;
    for(int j=i;j>0;--j){
        fatorial*=j;
    }
    printf("o fatorial de %d é %d\n",i,fatorial);
}
}
return 0;
}