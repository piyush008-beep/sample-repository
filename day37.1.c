//Find the transpose of a matrix.
#include <stdio.h>
int main(){
    int temp;
int matrix[3][3];
    


    printf("Enter the 9 elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 3; j++) {   
            scanf("%d", &matrix[i][j]);
        }
    }



    printf("transpose matrix");
    for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 3; j++) {
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
            printf("%d  ",matrix[i][j]);
        }printf("\n ");}
       return 0;} 
     
    