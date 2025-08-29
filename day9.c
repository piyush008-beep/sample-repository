//Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main()
{int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks > 90 && marks <= 100)
    {printf("a+");}
    else if(marks > 30 && marks <= 70)
    {printf("b");}
    else if (marks > 70 && marks <= 90)
    {printf("a");}
    else if (marks > 0 && marks <= 30)
    {printf("c");}
    else 
    {printf("marks are not valid");}



return 0;    }



 


}
