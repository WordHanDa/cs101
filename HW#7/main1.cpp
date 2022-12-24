/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n = 7;
   int spc = n;
   
   for(int i=1;i<=n;i++){
       for(int k=spc;k>=1;k--){
           printf(" ");
       }
       for(int j=1;j<=i;j++){
           printf("%d ",i);
       }
       printf("\n");
       spc--;
   }
    return 0;
}
