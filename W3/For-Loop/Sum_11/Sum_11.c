//              Problem
// Write a program in C to display the pattern like right angle triangle with a number

// Expected Output
// 1
// 22
// 333
// 4444

// Done
#include <stdio.h>

void main(){
    int rows;

    printf("Enter the number of rows of the Triangle: ");
    scanf("%d", &rows);

    for (int i = 1; i <=rows; i++){
        for (int j = 1; j <=i; j++) printf("%d",i,j);
        printf("\n");
    }
}