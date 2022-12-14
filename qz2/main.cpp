/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int rows = 5;
void printSpaces(int r,int rows){
    for(int i=rows; i>r; i--){
        printf(" ");
    }
}

void printStars(int r){
    int i;
    for(int i=1; i<=r; i++){
        printf("* ");
    }
}

int main()
{
    int j = rows;
    for(int i = rows; i >= 1; --i){
        printSpaces(i,j);
        printStars(i);
        printf("\n");
    }

    return 0;
}
