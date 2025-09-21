/*Write a program to print the following pattern:
*
**
***
****
*****
*/

#include <stdio.h>
int main(){
int j,rows;
printf("enter the number of rows");
scanf("%d",&rows);
printf("enter the number of columns");
scanf("%d",&j);
for(int i=0;rows>=i;i++)
   {for(int j=0;i>=j;j++){
      printf("*" );   }   
   
   printf("\n");}
   
      
  return 0;}