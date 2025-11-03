#include <stdio.h>
int main(){
    int temp;
    int n,k,i;
    printf("ENTER THE SIZE OF ARRAY: \n");
    scanf("%d",&n);
    printf("enter the value of k : \n");
    scanf("%d",&k);
    int arr[n];
    printf("enter %d integers\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }}
    printf("after sorting the elements\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
     int a=n-k;
    for(int i=n;i<=a;i--){
        arr[i]++;
        printf("%d\n",arr[i]);
        
    }
     
    return 0;

}