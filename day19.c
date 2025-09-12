//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
int n,sum=0,digit;
printf("enter the number : ");
scanf("%d",&n);
while(n>0){
    digit=n%10;
    sum=sum+digit;
    n=n/10;
}
printf("the sum of the digits is %d ",sum);
return 0;}