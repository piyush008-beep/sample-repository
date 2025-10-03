//Add two matrices.
#include <stdio.h>
int main(){
int rows,columns,matrix[20][20],matrix1[20][20],sum[20][20];
    printf("enter the number of rows");
    scanf("%d %d",&rows );
    printf("enter the number of columns");
    scanf("%d",&columns);


    printf("Enter the  elements of the  matrix:\n");
    for (int i = 0; i < rows; i++) {      
        for (int j = 0; j < columns; j++) {   
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Enter the  elements of the   2nd matrix:\n");
    for (int i = 0; i < rows; i++) {      
        for (int j = 0; j < columns; j++) {   
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {      
        for (int j = 0; j < columns; j++) {   
           sum[i][j]=matrix[i][j]+matrix1[i][j];
            printf("%d ",sum[i][j]);}
        printf("\n");}

            return 0;
}