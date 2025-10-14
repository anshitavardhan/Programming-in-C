/*4.3.11*/

#include <stdio.h>

int main() {
    int rows = 5;
    int i, j; 

    for (i = 1; i <= rows; i++) {
        for (j = 5 - i + 1; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

