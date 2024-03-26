#include <stdio.h>

int main(){

int jose=150,pedro=110,anos=0;

while(pedro<=jose){
    pedro+=3;
    jose+=2;
    ++anos;
}

printf("\npedro fica maior que jose em %d anos",anos);

return 0;
}