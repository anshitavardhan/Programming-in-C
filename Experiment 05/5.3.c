/*5.3. Declare variables within different code blocks (enclosed by curly
braces) and test their accessibility within and outside those blocks.*/

#include <stdio.h>
int main() {
 int a = 10;
 printf("Outside block: a = %d\n", a);
 {
 int b = 20;
 printf("Inside block: a = %d, b = %d\n", a, b);

 }
