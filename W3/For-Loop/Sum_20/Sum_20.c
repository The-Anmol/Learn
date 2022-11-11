//              Problem
// Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd rows of asterisks

// Done (issue)

// Issue - returns Odd number of Rows even if input is even;
#include <stdio.h>

void main(){
    int sum=0,rows,space,i;

    printf("Enter the rows of rowsfor your Pyramid: "); 

    scanf("%d", &rows);

    space=rows;
    for (int i=0;i<rows;i=i+2){
        for (int k=space;k>=0;k--) printf(" ");
        for (int j=0;j<=i;j++) printf("*");
        printf("\n");
        space--;
    }
}