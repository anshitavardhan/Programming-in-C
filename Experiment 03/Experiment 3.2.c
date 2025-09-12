/*Experiment 3: Conditional Statements
3.2. WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.*/



#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is VALID.\n");

        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        } 
        else if ((a*a + b*b == c*c) || 
                 (a*a + c*c == b*b) || 
                 (b*b + c*c == a*a)) {
            printf("It is a Right-Angle triangle.\n");
        } 
        else {
            printf("It is a Scalene triangle.\n");
        }
    } 
    else {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}




