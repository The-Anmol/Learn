//              Problem
// Write a C program to determine whether a given number is prime or not. ss

// Done
#include <stdio.h>

void main(){
    int number,check=0;

    printf("Enter the number to check whether it is prime or not: ");
    scanf("%d", &number);

    for (int i = 2; i <=number/2; i++){
        if(number%i==0) {
            check++;
            break;
        }
    }
    if(check==0 && number!= 1) printf("%d is a prime number.\n",number);
    else printf("%d is not a prime number",number);
}