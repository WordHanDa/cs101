/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i = 100;
   if(i%3==0){
       printf("Love\n");
   }
   if(i%5==0){
       printf("IU\n");
   }
   if(i%15==0){
       printf("Love IU\n");
   }
   if(i%3!=0 && i%5!=0 && i%15!=0){
       printf("%d\n",i);
   }
    return 0;
}
