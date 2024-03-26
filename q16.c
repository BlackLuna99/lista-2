#include <stdio.h>

int main(){
    int soma3=0,soma5=0;

for(int i=0;i<=200;++i){
    if(i>0&&i<=100&&i%3==0){
        soma3+=i;
    }
    if(i>=100&&i<=200&&i%5==0){
        soma5+=i;
    }
}
printf("\nA quantidade de numeros divisiveis por 3 de 0 a 100 é %d",soma3);
printf("\nA quantidade de numeros divisiveis por 5 de 100 a 200 é %d",soma5);
return 0;
}