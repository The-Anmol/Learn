//              Problem
// Write a program in C to display the n terms of even natural number and their sum

// Expected Output
//    1
//   2 2
//  3 3 3
// 4 4 4 4

// Done
#include <stdio.h>

void main(){
    int rows,space;

    printf("Enter the number of terms: ");
    scanf("%d", &rows);
    space = rows;
    for (int i=1;i<=rows;i++)
    {
        for (int k = space; k >0; k--) printf(" ");
        for (int j = 0; j < i; j++) printf("%d ", i);
        printf("\n");
        space--;
    }
}