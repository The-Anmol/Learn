#include <stdio.h>
#include <math.h>

void areaOfCircle(){
    float radius,area;
    const double PI = 3.14;
    
    printf("\n So You Choose Circle\n");
    printf("\033[0;37m");
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);

    area = PI * pow(radius,2);
    printf("Area of the Circle is = %f\n",area);
}
void areaOfRectangle(){
    float length, breadth, area;
    
    printf("So You Choose Rectangle\n");
    printf("\033[0;37m");
    printf("Enter the Length of the Rectangle: ");
    scanf("%f", &length);

    printf("Enter the Breadth of the Rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    printf("Area of the Rectangle is = %f",area);
}
void areaOfTriangle(){
    float base,height,area;

    printf("So You Choose Triangle\n");
    printf("\033[0;37m");
    printf("Enter the Height of the Triangle: ");
    scanf("%f", &height);
    
    printf("Enter the Base of the Triangle: ");
    scanf("%f", &base);

    area =  0.5 * base * height;
    printf("The Area of the Triangle is = %f", area);
}

void main(){
    int menu_selected;
    float area;
    int optionNumber[3] = {1,2,3};
    char options[3][10] = {"Circle", "Rectangle", "Triangle"};

    for (int i = 0; i<=2; i++) printf("Enter %d for Area of %s\n",optionNumber[i],options[i]);
    printf("Enter 4 to Exit\n");
    printf("Enter: ");
    scanf("%d", &menu_selected);
    printf("\n");

    printf("\033[0;32m");
    switch (menu_selected){
    case 1:
        areaOfCircle();
        break;
    case 2:
        areaOfRectangle();
        break;
    case 3:
        areaOfTriangle();
        break;
    case 4:
        printf("\nProgram Exited Successfully\n");
        printf("\033[0;37m");
        break;
    default:
        printf("\033[0;31m");
        printf("\nPlease Choose from given options\n");
        printf("\033[0;37m");
        main();
        break;
    }
}