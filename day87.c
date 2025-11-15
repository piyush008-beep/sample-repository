/*Create an enum for user roles 
(ADMIN, USER, GUEST) and display
 messages based on role.*/

#include <stdio.h>
enum roles{
    ADMIN,USER,GUEST
};
typedef struct assign{
    enum roles a;
}assign;
int main(){
    struct assign display;
    printf("enter the number 0-admin,1-user,2-guest \n");
    scanf("%d",&display.a);
    switch (display.a) {
        case GUEST:
        printf("welcome guest!!!");
        break;
        case USER:
        printf("PLEASE DO YOUR WORK!!");
        break;
        case ADMIN:
        printf("HELLO ADMIN!!");
        break; default:
            printf("Invalid PERSON value entered.\n");
            break;
    }

     return 0;

    }


   

