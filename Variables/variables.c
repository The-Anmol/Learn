#include <stdio.h>
#include <math.h>

void main(){
    
    // Rules 
   // 1. Variables are case sensitive
    // char a = 'a';
    // char A = 'A';
    
    // 2. Name of Variables should start with a character or a underscore _
    // char myname = 'Anmol';
    // char _yourname = 'Anmol';

    // 3. variable should not have only space or comma , (if there is a comma it will create two different variables)
    // char myname = 'Anmol';
    // char _myname = 'Anmol';



    // Types of Variables

    // Integer
    int age = 17;

    // Float
    float tax = 15.8;

    // Character
    char name = 'A';

    // Variable could also be constant
    // const float PI = 3.14;
    // printf("The value of PI is: %f",PI);


    double costPrice = 10 ;
    const float TAX_RATE = 18.5;
    const float MRP = costPrice + costPrice * TAX_RATE /100;
    printf("\n The Cost Price is : %.2lf", costPrice);
    printf("\n The fixed Tax Rate is : %.2lf ", TAX_RATE);
    printf("\n So, the MRP will be : %.2lf", MRP);
}

// Create a Program that Accepts
// • Cost Price as number from user
// • Tax Rate as number from user 
// • and Returns Max Retail Price (MRP)

// Present in Current Folder