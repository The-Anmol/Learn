// Problem
//  Write a program in C to store elements in an array and print it. 

#include <stdio.h>
void main(){
    int numbers[10];

    printf("Enter five integers seperated with spaces: ");
    scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

    for (int i = 0; i < 5; i++) printf("%d ", numbers[i]);
}