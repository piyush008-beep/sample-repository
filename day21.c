//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main()
{   int rem=0;
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    for(int i=1;i < n;i++)
        {
            if(n%i==0)
              {rem=rem+i;}
        }
        if(rem == n){
            printf("%d is a perfect number \n ", n);}
        else{
            printf("%d is not a perfect number",n);}
        
    
return 0;}