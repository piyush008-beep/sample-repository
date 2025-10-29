/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. 
Print the merged array.*/
#include <stdio.h>
int main(){
    int array[5];
    int array2[4];
    int array3[10];
    int temp;
    int i,k;
    printf("Enter the integers in an array 1 \n");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the integers in an array  2\n");
    for(int i=0;i<4;i++){
        scanf("%d",&array2[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(array[i]>array[j]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }}}
     printf(" after sorting\n");   
     for(int i=0;i<5;i++){
        printf(" %d ",array[i]);}


    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(array2[i]>array2[j]){
            temp=array[i];
            array2[i]=array2[j];
            array2[j]=temp;
        }}}
      printf(" after sorting\n");   
     for(int i=0;i<4;i++){
        printf(" %d ",array2[i]);}   
        
    for(int i=0;i<5;i++){
        array3[i]=array[i];
    }    
    for(int k=5,j=0;j<4;k++,j++){
        array3[k]=array2[j];
    }

    printf("Merged array");
    for(i=0;i<9;i++){
        printf("%d",array3[i]);

    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(array3[i]>array3[j]){
            temp=array[i];
            array3[i]=array3[j];
            array3[j]=temp;
        }}}
    printf("\n Merged array \n");
    for(i=0;i<9;i++){
        printf("%d",array3[i]);

    }    
    return 0;}
        

    

