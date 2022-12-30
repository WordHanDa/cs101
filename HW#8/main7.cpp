#include <stdio.h>
#include <math.h>

int main(){
    int n = -999;
    int arry[10],i,x,sum = 0;
    n<0?x=n*-1:x=n;
    arry[0]=x/pow(10,0);
    arry[1]=x/pow(10,1);
    arry[2]=x/pow(10,2);
    n<0?arry[2]=arry[2]*-1:arry[2];
    for(i = 0; i < 3; i++){
        sum=arry[i]%10+sum;
    }
    printf("%d",sum);
    return 0;
}

