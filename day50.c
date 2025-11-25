#include <stdio.h>
#include <string.h>
int main(){
    int date;
    char month[30];
    int year;
    int monthnum;

printf("enter the date of the day(dd)\n");
scanf("%d",&date);
printf("enter the month of the day(mm)\n");
scanf("%d",&monthnum);
printf("enter the year of the day(yyyy)\n");
scanf("%d",&year);

switch (monthnum){
    case 01:
    strcpy(month,"january");
    break;
    case 02:
    strcpy(month,"february");
    break;
    case 03:
    strcpy(month,"march");
    break;
    case 04:
    strcpy(month,"april");
    break;
    case 05:
    strcpy(month,"may");
    break;
    case 06:
    strcpy(month,"june");
    break;
    case 07:
    strcpy(month,"july");
    break;
    case 8:
    strcpy(month,"august");
    break;
    case 9:
    strcpy(month,"september");
    break;
    case 10:
    strcpy(month,"october");
    break;
    case 11:
    strcpy(month,"november");
    break;
    case 12:
    strcpy(month,"december");
    break;
    default:
    printf("not valid");
    break;}
    
printf("%d-%s-%d",date,month,year);
}