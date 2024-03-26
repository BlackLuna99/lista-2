#include <stdio.h>

int main(){

int primeiro=1,segundo=1,atual;

printf("1=%d\n2=%d\n",primeiro,segundo);

for(int i=3;i<=20;++i){

atual=primeiro+segundo;

printf("%d=%d\n",i,atual);

primeiro=segundo;
segundo=atual;
}

return 0;
}