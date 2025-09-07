//Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
int n;
printf("enter the number : ");
scanf("%d",&n);
printf("factor of number are :\n ");
for(int l=1;l<=n;l=l+1){
   if( n%l==0
      )   printf("  %d \n ",l);
}



    

return 0;}