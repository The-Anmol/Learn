// Problem
//  Write a program in C to store elements in an array and print it. 

#include <stdio.h>
void main(){
    int terms,sum=0;

    printf("\nEnter the number of terms you will enter: ");
    scanf("%d", &terms);

    int numbers[5];

    for (int i = 0; i < terms; i++){
        printf("Enter the element %d of the array: ",i+1);
        scanf("%d", &numbers[i]);
        sum = sum+numbers[i];
    } 
    for (int i = terms; i>0; i--) {
        printf("\nThe %d element of the array is = %d",i,numbers[i]);
        sum = sum + numbers[i];
    }
    printf("\nThe sum of the elements of the array is = %d", sum);
}