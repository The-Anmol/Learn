#include <stdio.h>
#include <math.h>

void main(){
    double cost_price, tax_rate, mrp;

    printf("\n Enter Cost Price of the Product : ");
    scanf("%lf", &cost_price);

    printf("Enter Tax Rate for the Product : ");
    scanf("%lf", &tax_rate);

    mrp = cost_price + cost_price * tax_rate / 100;
    printf("The MRP or Maximum Retail Price Should be : %.2lf", mrp );
}