/*Create an enumeration for days (SUNDAY to SATURDAY) and print each day with 
its integer value.*/
#include <stdio.h>
enum weekdays{
    monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
typedef struct week{
    enum weekdays days;
}week;

int main(){
    struct week e;
    e.days=monday;
    printf("monday=%d\n",e.days);
    e.days=tuesday;
    printf("tuesday=%d\n",e.days);
    e.days=wednesday;
    printf("wednesday=%d\n",e.days);
    e.days=thursday;
    printf("thursday=%d\n",e.days);
    e.days=friday;
    printf("friday=%d\n",e.days);
    e.days=saturday;
    printf("saturday=%d\n",e.days);
    e.days=sunday;
    printf("sunday=%d\n",e.days);
   
    return 0;

}