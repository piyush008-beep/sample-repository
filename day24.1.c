/*Write a program to print the following pattern:
1
12
123
1234
12345*/
#include <stdio.h>
int main(){
int j,rows;
printf("enter the number of rows : ");
scanf("%d",&rows);
printf("enter the number of columns : ");
scanf("%d",&j);
for(int i=1;rows>=i;i++)
   {for(int j=1;i>=j;j++){
      printf("%d",j );   }   
   
   printf("\n");}
   
      
  return 0;}