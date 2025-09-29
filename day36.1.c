//Find the sum of all elements in a matrix
#include <stdio.h>
int main(){
    int array[20][20];
    int i,j,rows,columns;
    printf("enter the number of rows in the array ");
    scanf("%d",&rows);
    printf("enter the number of columns in the array ");
    scanf("%d",&columns);

    printf("enter the elements ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
     scanf("%d",&array[i][j]);}}

     int row_sum=0;
     for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            row_sum=row_sum+array[i][j];
        }
       
     }
printf("%d ",row_sum);

}