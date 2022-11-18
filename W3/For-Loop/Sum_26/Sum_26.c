//              Problem
// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. 

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