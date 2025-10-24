/*4.5. Ramanujan Number is the smallest number that can be
expressed as the sum of two cubes in two different ways. WAP to
print all such numbers up to a reasonable limit.*/

#include <stdio.h>
int main() {
 int a, b, c, d, limit = 20;
 for (a = 1; a <= limit; a++) {
 for (b = a; b <= limit; b++) {
 for (c = a + 1; c <= limit; c++) {
 for (d = c; d <= limit; d++) {
 if (a*a*a + b*b*b == c*c*c + d*d*d)
 printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
 a*a*a + b*b*b, a, b, c, d);
 return 0;
 }
 }
 }
