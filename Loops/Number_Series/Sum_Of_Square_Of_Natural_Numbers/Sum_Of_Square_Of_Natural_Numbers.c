#include <stdio.h>
#include <math.h>

void main () {
    int terms,sum=0;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    for (int i = 1; i <=terms; i++) sum = sum + pow(i, 2);
    printf("The sum of square of first %d natural numbers is %d",terms,sum);
}