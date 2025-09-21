//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{

float n;
float sum=0;
float l;
printf("enter the nth term upto which you want its sum :");
scanf("%f",&n);
for(int i=2;i<=n;i=i+2)
   {l=(i/(2*i-1)); 
    sum=sum+l;
    printf("%f",sum); }
 
  return 0;
  

}
    
     