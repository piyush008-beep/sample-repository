/*Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', 
or 'Go' based on its value.*/
#include <stdio.h>
enum lights{red,yellow,green};
typedef struct inst{
    enum lights a;

}a;
int main(){
   struct inst big;
   printf("enter the number light 0-red,1-yellow,2-green ");
   scanf("%d",&big.a);
   switch (big.a) {
        case red:
            printf("Stop\n");
            break;
        case yellow:
            printf("Wait\n");
            break;
        case green:
            printf("Go\n");
            break;
        default:
            printf("Invalid light value entered.\n");
            break;
    }

    return 0;
}
   

   


