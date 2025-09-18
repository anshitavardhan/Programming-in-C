//Write a C program to find the roots of the quadratic equations.//

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, realPart, imagPart;

    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: %.2f, %.2f", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and same: %.2f", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-d) / (2*a);
        printf("Roots are complex: %.2f + %.2fi , %.2f - %.2fi",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

