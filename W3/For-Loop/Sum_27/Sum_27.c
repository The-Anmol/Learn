// Problem
// Write a c program to check whether a given number is a perfect number or not.

// Done
#include <stdio.h>

void main(){
    int number,perfect_divisor_sum=0,non_perfect_divisor_sum=0;

    printf("Enter the number to find whether it is perfect or not: ");
    scanf("%d", &number);

    for (int i = 2; i <number; i++)
    {
        if (number%i==0){
            if (i==2) printf("\nThe Factors of %d are ",number);
            perfect_divisor_sum = perfect_divisor_sum + i;
            printf("%d,", i);
        }
        else non_perfect_divisor_sum = non_perfect_divisor_sum + i;
    }
    if (number==perfect_divisor_sum) printf("\n%d is a perfect number", number);
    else printf("\n%d is not a perfect number because the sum of the factors of %d is not equal to %d ", number, number, number);

}