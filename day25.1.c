/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    **/
#include <stdio.h>
int main()
{
  for(int i=0;i<=4;i++)
  
    {  for(int k=0;k<=i;k++)
        {printf(" ");}
        
        
        
        
        for(int j=4;i<=j;j--)
    
    {printf("*");}
    printf("\n");
    }
  
    return 0;}