//Reverse an array without taking extra space.
#include <stdio.h>


int reverse(int array[],int n);
void printarr(int array[],int n);
int main(){
    int array[]={1,2,3,4,5,6};
    reverse(array,6);
    printarr(array,6);
    return 0;}
void printarr(int array[],int n){
for(int i=0;i<n;i++)
{printf("%d",array[i]);}
printf("\n");}

int reverse(int array[],int n){
for(int i=0;i<n/2;i++){
int firstvalue=array[i];
int secondvalue=array[n-i-1];
array[i]=secondvalue;
array[n-i-1]=firstvalue;
}
return 0;}