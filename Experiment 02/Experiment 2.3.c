/*Experiment 2: Operators
3.Write a program to calculate Compound Interest.*/

#include <stdio.h>
#include <math.h>   

int main()
{
    float principal, rate, time, compoundInterest, amount;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}

