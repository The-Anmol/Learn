#include <stdio.h>

void main () {
    int rows,space;

    printf("Enter the number of Rows of the pyramid: ");
    scanf("%d",&rows);
    space = rows+3;
    for (int i=rows;i>=1;i--)
    {
        for (int j=1;j<=space;j++){
             printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
            printf("\n");
        space++;
     }
}

