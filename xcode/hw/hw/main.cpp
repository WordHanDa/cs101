#include <stdio.h>
int main() {
    int rows = 4;
    int i, space, k = 0;

    for (i = 1; i <= rows; ++i, k = 0) {
       for (space = 1; space <= rows - i; ++space) {
          printf("  ");
       }
       while (k != 2 * i - 1) {
          printf("* ");
          ++k;
       }
       printf("\n");
    }
    for(int i = 1; i<rows; i++){
        printf("*");
        for(int i = 1; i<=rows*3-1; i++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int i = 1; i<=rows*2-1; i++){
        printf("* ");
    }
    return 0;
}
