#include <Stdio.h>

void main(){
    int rows,number;

    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    for (int i=1;i<=rows;i++)
    {
        if (i%2==0) number = 0;
        else number=1;
        for (int j = 1; j <=i; j++){
            if (j%2==0) number = 0;
            else number=1;
            printf("%d",number);
        }
        printf("\n");
    }
    
}