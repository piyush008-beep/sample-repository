//Write a program to input two numbers and display their sum, difference, product, and quotient.
    #include <stdio.h>
int main()
   { int a,b;
    printf("eneter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    int sum = a + b;
    int div = a/b;
    int mul = a*b;
    int diff = a-b;
    printf("the sum is %d \n",sum);
      printf("the division is %d \n",div);
        printf("the multiplication is %d \n",mul);
             printf("the difference is %d \n",diff);

    
    return 0;}