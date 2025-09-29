//Delete an element from an array
#include <stdio.h>
int main(){
    
    int number,array[20],delete;
    printf("enter the number of elements of array ");
    scanf("%d",&number);
    printf("enter the elements of array ");
    for(int i=0;i<=number;i++){
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
   for(int i=0;i<=number;i++){
       
        printf("%d ",array[i]);
}
printf("enter the index of element of array which is to be deleted :  ");
    scanf("%d",&delete);
    for(int i=delete;i<number;i++)
    {array[i]=array[i+1];}
    number--;
    for(int i=0;i<=number;i++){
       
        printf("%d ",array[i]);}


return 0;}
