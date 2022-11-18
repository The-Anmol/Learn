//      Problem
// Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

#include <stdio.h>
#include <math.h>

int factorial(int num){
    int factorial_answer=1;
    for (int i=num;i>0;i--) factorial_answer = factorial_answer * i;
    return factorial_answer;
}
// int equation(int limit, int number ){
//     int answer ;
//     for (int i = 2; i<=number; i=i+2) answer = pow(number,i) ;
//     return answer;
// }

void main(){
    int terms,number;
    float sum = 0,single_term=0,temp;

    printf("Enter the value of X: ");
    scanf("%d",&number);

    printf("Enter the number of terms of Series: ");
    scanf("%d",&terms);

    for (int i=2;i<terms;i=i+2){
        temp = pow(number,i)/factorial(i);
        sum = single_term + temp;
        single_term = temp;
        printf("%f = pow(%d,%d)/factorial(%d) \n",single_term,number,i,i);
    }
    printf("The Sum is = %f",1-sum);
}