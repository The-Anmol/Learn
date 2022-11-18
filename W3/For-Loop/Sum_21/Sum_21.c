// Problem
// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 

// Done

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int terms;
    float number,current_term,sum = 0;
    float numberArray[20] = {};

    printf("Enter the value of x for the series  [ x + xx + xxx + xxxx ...]: ");
    scanf("%f", &number);

    printf("Enter the number of terms of the series  [ x + xx + xxx + xxxx ...]: ");
    scanf("%d", &terms);

    for (int i=0;i<terms;i++){
        printf("%f\n", current_term + number*pow(10, i));
        numberArray[i] = current_term + number*pow(10, i);
        current_term =  current_term +  number*pow(10, i);
        // printf("%f \n",numberArray[i]);
        sum = sum + numberArray[i];
    }
    printf("The sum of the series is = %f", sum);
}