//              Problem
// Write a C program to calculate the factorial of a given number.

// Done
#include <stdio.h>

void main () {
    int number,factorial=1;

    printf("Enter the number to find out its Factorial: ");
    scanf("%d",&number);
    
    for (int i = number; i>0; i--) factorial = factorial * i;
    printf("The Factorial of %d is %d", number, factorial);
}

