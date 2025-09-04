//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{ float n1,n2,sum,subtraction,division,multiplication;
char choice;
printf("enter the number ");
scanf("%f",&n1);
printf("enter the second number ");
scanf("%f",&n2);
printf("if + : addition \n  - : subtraction \n multiplication: * \n division: / then enter your choice of symbol ");
scanf("%s",&choice);
switch(choice){
    case '+' : sum = n1 +n2 ;
    printf("sum of two given numbers is %f \n", sum);
    break;
    case '-' : subtraction = n1-n2;
    printf("subtraction of two numbers is %f \n", subtraction);
    break; 
    case '*' : multiplication = n1*n2 ;
    printf("multiplication of two given numbers is %f \n",multiplication);
    break;
    case '/' : division = n1/n2;
    printf("division of two numbers is %f \n",division);
    break;
    default:printf("invalid choice");
    break;          }
 return 0;}