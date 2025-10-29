/*Write a Program to take a sorted array(say nums[]) and an integer
 (say target) as inputs. The elements in the sorted array might be repeated. 
 You need to print the first and last occurrence of the target and print
 the index of first and last occurrence. Print -1, -1 if the target is not present.*/

#include <stdio.h>
int main(){
    int a=-1;
    int num[5];
    int n;
    
    printf("Enter the integers in an array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++){
        printf("  %d ",num[i]);
    }
    
    printf("enter your target number \n");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(num[i]==n){
        printf(" %d ",i);
        }
    }
    return 0;}