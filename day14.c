 #include <stdio.h>
int main()
{
int sum=0;
int n;
printf("enter the numbers till which we have to find sum: ");
scanf("%d",&n);
for(int i=1;i<=n;i=i+2) {
    sum=sum+i;
    printf("%d \n",i);
}

printf("so the sum of numbers is %d",sum);
return 0;}