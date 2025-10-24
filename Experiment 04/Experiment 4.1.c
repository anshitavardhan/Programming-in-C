/*4.1. WAP to enter numbers till the user wants. At the end, it should display
the count of positive, negative, and Zeroes entered.*/


#include <stdio.h>
int main() {
 int num, pos = 0, neg = 0, zero = 0;
 char choice;
 do {
 scanf("%d", &num);
 if (num > 0)
 pos++;
 else if (num < 0)
 neg++;
 else
 zero++;
 printf("Do you want to continue? (y/n): ");
 scanf(" %c", &choice);
 } while (choice == 'y' || choice == 'Y');
 printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
 return 0
