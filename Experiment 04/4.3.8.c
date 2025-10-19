/*4.3.9*/

#include <stdio.h>

int main() {
    int n = 5;
    int i, j, s;

    
    for (i = 1; i <= n; i++) {
        
        for (s = i; s < n; s++) {
            printf("  ");
        }
        
        for (j = n; j >= n - i + 1; j--) {
            printf("%d ", j);
        }
        
        for (j = n - i + 2; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        
        for (s = n; s > i; s--) {
            printf("  ");
        }
        
        for (j = n; j >= n - i + 1; j--) {
            printf("%d ", j);
        }
        
        for (j = n - i + 2; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


