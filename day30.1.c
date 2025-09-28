//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main(){
int count=0;
int pi=0;
int tri=0;
int i;
printf("enter the number of elements: ");
scanf("%d",&i);
int array[i];




printf("enter the elements");
for (int m=1;m<=i;m++ )
{scanf("%d",&array[m]);
        if ( array[m]>0 ){
        count++;
        }
        else if(array[m]==0)
        tri++;
        else {
        pi++;
       }
    }
     printf("positive numbers  are %d\n",count++);
  printf("negative numbers  are %d\n",pi++);
  printf("the number of zero elements are %d",tri++);
  return 0;}