#include <stdio.h>

int main(){

for(int i=10;i<=100;i+=10){
    printf("%d° Celsius = %d° Fahrenheit\n",i,(i*9+160)/5);
}
return 0;
}