//Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
int n,q,fact=1,sum=0,rem;    
printf("enter a number : ");
scanf("%d",&n);
n=q;
while (q ==! 0)
{   rem=q%10;
    for(int i=1;i<=rem;i++)
     {fact=fact*i; }
     sum=sum+fact;
     fact=1;
     q=q/10;
}
if(sum==n)
printf("  number is strong \n ",);
else
printf(" number is not strong",);
return 0;

}
