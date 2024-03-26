#include <stdio.h>

int main(){

for(int c1=1;c1<=500;++c1){
    for(int c2=c1;c2<=500;++c2){
        for(int h=c2;h<=500;++h){
            if(h*h==(c1*c1)+(c2*c2))
                printf("cateto 1=%d, cateto 2=%d hipotenuza=%d\n",c1,c2,h);     
}
}
}
return 0;
}