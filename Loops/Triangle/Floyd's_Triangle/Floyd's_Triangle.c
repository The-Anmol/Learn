#include <stdio.h>

void main(){
    int rows;

    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    // for (int i = 0; i <=rows; i++) {
            int num = 0;
        for (int j = 0; j <=rows; j++) {
            if(j%2==0) num = 1;
            // else num = 0;
            printf("%d ",num);
        }
        // printf("\n");
    // }
}