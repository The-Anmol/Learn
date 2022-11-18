//              Problem
// Write a C program to check whether a given number is an armstrong number or not.

// Done

#include <stdio.h>
#include <math.h>

int length(int number){
    int answer;
    do {
        number /= 10;
        answer++;
    } while (number != 0);
    return answer;
}

int * printDigit(int N,int arr[]){
    int i = 0;
    int j, r;
    while (N != 0) {
        r = N % 10;
        arr[i] = r;
        i++;
        N = N / 10;
    }   
    // for (j = i - 1; j > -1; j--) {
    //     printf("%d ", arr[j]);
    // }
    return arr;
}

void main(){
    int sum=0,number;
    int digits[20];

    printf("Enter the number to get the sum of natural number to that number: ");
    scanf("%d", &number);

    // printf("The numbers are" );
    // for (int i = 1; i <=number; i++)
    // {
    //     sum = sum + i;
    //     printf(" %d,", i);
    // }
    // printf("\n The sum of the numbers is %d \n", sum);
    
    
    // printf("%d ",length(number));
    // printf("%d",number);

    // for (int i = 1; i <=length(number);i++){
    //     float temp;
    //     printf("\n from for loop %d", abs(number/pow(10, i-1)));
    //     // temp = pow((number / pow(10,i)), length(number));
    //     // printf("%f \n", temp);
    // }
    printf("%d",printDigit(number,digits));
}

// number = number / 10;