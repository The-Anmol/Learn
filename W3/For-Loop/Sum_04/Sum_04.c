//              Problem
// Write a program in C to read 10 numbers from keyboard and find their sum and average

//              Modification
// Accepts user input and the print the sum to natural numbers to that number

// Done
#include <stdio.h>

void main(){
    int sum=0,terms,number[]={};

    printf("Enter the number of terms: ");
    scanf("%d",&terms);

    for (int i = 1; i <=terms; i++){
        number[i] = scanf("%d");
        printf("%d", number[i]);
    }
    for (int i = 1; i <=terms; i++){
        printf("%d", number[i]);
        // printf("%d", i);
    }
        // sum = sum + i;
}