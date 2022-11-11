//              Problem
// Write a C program to find the sum of first 10 natural numbers

//              Modification
// Accepts user input and the print those numbers and their sum to natural numbers to that number

// Done
#include <stdio.h>

void main(){
    int sum=0,number;

    printf("Enter the number to get the sum of natural number to that number: ");
    scanf("%d", &number);

    printf("The numbers are" );
    for (int i = 1; i <=number; i++)
    {
        sum = sum + i;
        printf(" %d,", i);
    }
    printf("\n The sum of the numbers is %d \n", sum);
}