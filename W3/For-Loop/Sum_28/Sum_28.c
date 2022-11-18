// Problem
// Write a c program to find the perfect numbers within a given number of range.

// Done
#include <stdio.h>

void main(){
    int start_range,end_range,divisor_sum=0;

    printf("Enter the number to start from: ");
    scanf("%d", &start_range);

    printf("Enter the number to end at: ");
    scanf("%d", &end_range);

    for (int i=start_range; i<end_range; i++){
            for (int j=2; j<i; j++){
                if (i%j == 0){
                divisor_sum = divisor_sum + j;
            }
        }
        if(i==divisor_sum) printf("\n %d is a perfect number", i);
        printf("%d,", divisor_sum);
    }
    

}
// The Perfect numbers within the given range : 6 28