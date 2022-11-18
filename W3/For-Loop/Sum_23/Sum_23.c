//      Problem
// Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].

// Done
#include <stdio.h>
#include <math.h>

float factorial(int num){
    float factorial_answer=1;
    for (int i = num; i>0; i--) factorial_answer = factorial_answer * i;
    return factorial_answer;
}

void main(){
    
    int terms,x;
    float sum = 0;

    printf("Enter the value of X for the series [ 1+x+x^2/2!+x^3/3!+....] : ");
    scanf("%d", &x);

    printf("Enter the terms to terms of the series [ 1+x+x^2/2!+x^3/3!+....] : ");
    scanf("%d", &terms);

    for (int i = 0; i <terms; i++)
    {
        sum = sum + (pow(x,i)/factorial(i));
    }
    printf("The sum of the series is = %f",sum);
}

// pow(x,i)/factorial()
// (pow(3,0)/factorial(0)) = 1
// (pow(3,1)/factorial(1)) = 3
// (pow(3,2)/factorial(2)) = 4.5
// (pow(3,3)/factorial(3))
// (pow(3,4)/factorial(4))
