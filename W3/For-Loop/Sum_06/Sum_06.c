//              Problem
// Write a program in C to display the multiplication table of a given integer.

//              Modification
// Introduced limit of the table
// Done
#include <stdio.h>

void main(){
    int limit,number;

    printf("Enter the number to get the multiplication table: ");
    scanf("%d", &number);

    printf("Enter the number to limit to the multiplication table: ");
    scanf("%d", &limit);

    for (int i=1;i<=limit;i++) printf("%d X %d = %d\n",number,i,number*i);
}