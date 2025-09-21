//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include <stdio.h>
int main()
{int a,b,c; 
    printf("enter the first angle 0f triangle ");
    scanf("%d",&a);
     printf("enter the second angle triangle ");
    scanf("%d",&b);
     printf("enter the third angle triangle ");
    scanf("%d",&c);
    if(a==b && a==c)
     {printf("triangle is equilateral");}
else if(a==b || b==c)
  {printf("triangle is isoceles");}
else
  {printf("triangle is obtuse");}
return 0;


}