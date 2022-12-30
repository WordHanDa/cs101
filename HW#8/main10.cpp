#include <stdio.h>
#include <math.h>

int main(){
    int n = 1234;
    int arry[10],i;
    arry[0]=n/pow(10,0);
    arry[1]=n/pow(10,1);
    arry[2]=n/pow(10,2);
    arry[3]=n/pow(10,3);
    for(i = 0; i < 4; i++){
        printf("%d",arry[i]%10);
    }
    return 0;
}

