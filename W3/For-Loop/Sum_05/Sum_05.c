//              Problem
// Write a program in C to display the cube of the number upto user given an integer and their sum

// Done
#include <stdio.h>
#include <math.h>

void main(){
    int  limit;
    float sum = 0;
    printf("Enter the number to get the sum of natural number to that number: ");
    scanf("%d", &limit);

    for (int i = 1; i <=limit; i++){
        printf("Number is : %d and cube of the %d is :%f \n",i,i,pow(i,3));
        sum = sum + pow(i, 3);
    }
    printf("The sum the cube of the numbers from 1 to %d = %f", limit, sum);
}