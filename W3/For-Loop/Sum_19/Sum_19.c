#include <stdio.h>

void main(){
    float number,sum=0;

    printf("Enter the number of terms of harmonic series: ");
    scanf("%f",&number);

    for (float i = 1; i <=number; i++) sum = sum +(1 / i);
    printf("The Sum of the Harmonic Series from 1 to %f is %f", number, sum);
}