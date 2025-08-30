//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
int main()
{int a;
printf("eter the day number(1-7)");
scanf("%d",&a);
switch (a)
{case 1 :
printf("it's monday");
  break;
  case 2 :
printf("it's tuensday");
  break;
  case 3 :
printf("it's wednesay");
  break;
  case 4 :
printf("it's thursay");
  break;
  case 5 :
printf("it's friday");
  break;
  case 6 :
printf("it's saturday");
  break;
  case 7 :
printf("it's sunday");
break;}
return 0;}