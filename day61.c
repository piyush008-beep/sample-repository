#include <stdio.h>
int main(){
    int d;
    int arr[d];
    int count=0;
    printf("enter the number of integers in the array");
    scanf("%d",&d);
    for(int i=0;i<=d;i++){
        if(arr[i]<0 && arr[i+1]<0){
            count++;
        }
        else{
            printf("0");
        }
        
    }
return 0;
}