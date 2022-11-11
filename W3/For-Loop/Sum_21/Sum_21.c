#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int terms,number=9,current_term=0;
    int numberArray[] = {};

    for (int i=0;i<4;i++){
        current_term = numberArray[i] = current_term + 9*pow(10, i);
    printf("%d \n",numberArray[i]);
    }
    return 0;
    getch();
}