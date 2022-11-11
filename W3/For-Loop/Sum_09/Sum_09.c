//              Problem
// Write a program in C to display the pattern like right angle triangle using an asterisk.

// Done
#include <stdio.h>

void main(){
    int rows;

    printf("Enter the number of rows of the Triangle: ");
    scanf("%d", &rows);

    for (int i = 1; i <=rows; i++){
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
}