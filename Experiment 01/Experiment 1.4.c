/*Experiment 1: Installation, Environment Setup and starting with 
C language
4. Write a C program to perform four arithmetic operations on two 
variables*/
 
#include<stdio.h>
int main ()
{
int a, b, sum, sub, mul;
float div;
 printf("enter the number a");
scanf("%d, &a");
printf("enter the number b");
scanf("%d", &b);
div= (float)a/b;
printf("sum of the two numbers is: %d\n",sum=a+b);
printf("sub of the two numbers is: %d\n",sub=a-b);
printf("mul of the two numbers is: %d\n",mul=a*b);
printf("div of the two numbers is: %d\n",div);
return 0;
}

