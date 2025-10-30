/*Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. Print that missing number*/
#include <stdio.h>
int main(){
    int n;
    printf(" enter size of the array\n ");
    scanf("%d",&n);
    int num1[n];
    int num[n];
    printf("enter the integers in the array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&num1[i]);
    }

    for(int i=0;i<n;i++){
        num[i]=i;
    }

    for(int i=0;i<n;i++){
        if(num[i]==!num1[i]){
        printf("missing number is %d\n",i);
        }
    }



    return 0;
}