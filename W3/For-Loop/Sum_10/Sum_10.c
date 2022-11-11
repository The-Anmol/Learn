//              Problem
// Write a program in C to display the pattern like right angle triangle with a number

// Expected Output
// 1
// 12
// 123
// 1234

// Done
#include <stdio.h>

void main(){
    int rows;

    printf("Enter the number of rows of the Triangle: ");
    scanf("%d", &rows);

    for (int i = 1; i <=rows; i++){
        for (int j = 1; j <=i; j++) printf("%d",j);
        printf("\n");
    }
}