//              Problem
//  Write a program in C to display the n terms of square natural number and their sum.

// Done
#include <stdio.h>
#include<conio.h>
#include <math.h>

void main(){
    int sum=0,terms;

    printf("\nEnter the number of terms to find thier square and sum: ");
    scanf("%d", &terms);

    printf("The square natural upto %d terms are",terms);
    for (int i = 1; i <=terms; i++){
        sum = sum + pow(i,2);
        printf(" %f,", pow(i,2));
    }
    printf("\nThe sum of the numbers is");
    printf("\033[0;32m %d ",sum);
    printf("\033[0;37m");
}