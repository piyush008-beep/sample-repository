//Insert an element in an array at a given position.
#include <stdio.h>



void number(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
}
int main(){
    int size=4;
    int array[20]={10,20,30,40};
    printf("enter the number of elements");
    scanf("%d",&size);
    printf("enter the elements ");
    for(int i=0;i<size;i++){
        scanf("%d",array[i]);}
    
    int element,position;

    printf("original array \n");
    number(array,size);
    printf("enter the element to insert ");
    scanf("%d",&element);
    printf("enter the position ");
    scanf("%d",&position);

    if(position<0 || position>size || size>=20 )
    {printf("error : invalid position ");
    return 1;}

    for(int i=size-1;i>=position;i--){
        array[i+1]=array[i];}
    array[position]=element;
     size++;
    printf("array after inserting %d at position %d ",element,position);
    number(array,size);
     return 0;}

