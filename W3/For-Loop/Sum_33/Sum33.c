//              Problem
// Write a C program to display Pascal's triangle

#include <stdio.h>

void main () {
    int rows,space;
    printf("Enter the number of Rows of the pyramid: ");
    scanf("%d",&rows);
    space = rows+3;

    for (int i=1;i<=rows;i++){
        for (int j=space;j>=1;j--) printf(" ");
        // if (i=1) printf("1");
        for (int k=1;k<=i;k++) printf("* ");
        // if (i=rows) printf("1");
        printf("\n");
        space--;
     }
}

