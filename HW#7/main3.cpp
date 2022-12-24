/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(){
    int y=1;
    int x=1;
    
    while(y<=9){
        printf("%d*%d=%d\t",y,x,y*x);
        if(x<9){
            x++;
        }else{
            x=1;
            y++;
            printf("\n");
        }
        //x<9 ? x++: (x=1, y++, printf("\n"));
    }
    
    return 0;
}
