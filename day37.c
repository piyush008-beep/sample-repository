// Find the sum of each row of a matrix
#include <stdio.h>

int main() {

    int matrix[3][3];
    int row_sum;


    printf("Enter the 9 elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 3; j++) {   
            scanf("%d", &matrix[i][j]);
        }
    }

     
    printf("Calculating row sum");
    for (int i = 0; i < 3; i++) {      
       row_sum=0;
        
        for (int j = 0; j < 3; j++) {  
            row_sum=row_sum+matrix[i][j];
        }
        
        printf("\n");
        printf("Sum of row %d is: %d\n", i, row_sum);
    }

    return 0;
}






