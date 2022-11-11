//              Problem
// Write a program in C to display the n terms of odd natural number and their sum

// Done
#include <stdio.h>

void main(){
    int sum=0,terms,current_num=1;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("The odd numbers are: " );
    for (int i = 1; i <=terms; i++)
    {
        sum = sum+current_num;
        printf("%d", current_num);
        if (i<terms) printf(",");
        current_num++;
        
    }
    printf("\n The Sum of odd Natural Number upto %d term is = %d \n", terms,sum);
}