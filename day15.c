//write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int j=1;
    int m;
    printf("enter the number whose we want to find factorial: ");
    scanf("%d",&m);
    
for(int i=2;i<=m;i++)
{j=j*i;  }
printf("%d",j);
return 0;





}