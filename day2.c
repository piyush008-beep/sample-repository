//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
    int length ,breadth;
printf("enter the lenght of rectangle ");
scanf("%d",&length);
printf("enter the breadth of rectngle ");
scanf("%d",&breadth);
int area;
area=length*breadth;
printf("area of rectangle is %d \n",area);
int perimeter;
perimeter=2*(length+breadth);
printf("perimeter of rectangle is %d\n",perimeter);
return 0;}
