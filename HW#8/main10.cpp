#include <stdio.h>
#include <math.h>

int main(){
    int n = 1234;
    int arry[10],i;
    for(int i=0;i<=3;i++){
        arry[i]=n/pow(10,i);
    }
    for(i = 0; i < 4; i++){
        printf("%d",arry[i]%10);
    }
    return 0;
}

