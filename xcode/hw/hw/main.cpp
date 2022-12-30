#include <stdio.h>
#include <math.h>

int main(){
    int n = 1234;
    int arry[10],i;
    for(i=0; n>0; i++){
        arry[i]=n%(pow(10,i));
        n=n/(i*10);
    }
    printf("%d",arry[2]);
    /*for(i=i-1 ;i>=0 ;i--){
        printf("%d",arry[i]);
        i==4||i==8?printf(" "):printf("");
    }*/
    return 0;
}

