//Write a program to print numbers from 1 to n
#include <stdio.h>
void pro(int i){
if(i==0)
return;
pro(i-1);
printf("%d \n",i);
return;
}






int main()
{int i;
    printf("enter the i");
    scanf("%d",&i);
    pro(i);
    return 0;


}