//Read and print elements of a one-dimensional array
#include <stdio.h>

int array1d(int n, int array[]);

int main()
{
int array[]={1,2,3,4,5,6};
 array1d(6,array);
return 0;

}



int array1d(int n, int array[]){
    int t;
    printf("enter the index number ");
    scanf("%d",&t);
    for(int i=0;i<=t;i++){
printf("%d",array[i]);
printf("\t");}
return 0;
}









