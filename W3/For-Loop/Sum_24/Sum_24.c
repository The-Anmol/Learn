//              Problem
// Write a program in C to find the sum of the series [x-x^3+x^5+......].

// Done
#include <stdio.h>
#include <math.h>

void main(){
    int sum=0,number,terms,temp=1;

    printf("Enter the value of X: ");
    scanf("%d", &number);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i = 1; i <=terms; i++){
        if (i%2==0) sum = sum-pow(number,temp);
        else sum = sum+pow(number,temp);
        temp = temp + 2;
    }
    printf("\n The sum of the series [x-x^3+x^5+......]. to the term %d is %d \n",terms, sum);
}