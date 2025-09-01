//Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
int main()
{float units;
    printf("enter the units used ");
    scanf("%f",&units);
    float cost,cost2;
    cost = units*5.40;
    cost2 = units*7.75;
    if(units<=300){
       printf("cost of the electricity bill is ₹ %f",cost);}
       else{
        printf("cost of the electricity bill is ₹ %f ",cost2);}
       


    return 0;}