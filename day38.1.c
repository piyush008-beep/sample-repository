
//Check if a matrix is symmetric.

#include <stdio.h>
int main(){
    int temp;
int matrix[20][20];

    


    printf("Enter the  elements of the 3*3 matrix:\n");
    for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 3; j++) {   
            scanf("%d", &matrix[i][j]);
        }
    }


    int count =0;
    printf("checking if matrix is symmetric");
    for (int i = 0; i < 2; i++) {      
        for (int j = 0; j < 3; j++) {
            if(matrix[i][j]==matrix[j][i])
            {count++;}
           
        }}
        if(count == 5){
            printf("true");}
            else{
                printf("false");
            }
         return 0;}
       