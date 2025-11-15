/*Use enum to represent menu choices
 (ADD, SUBTRACT, MULTIPLY) 
and perform operations using switch.*/
#include <stdio.h>
enum oper{
    ADD,SUBTRACT,MULTIPLY
};
typedef struct done {
    enum oper a;
    int a1,b,c;

}done;

int main(){
    struct done operators;
    printf("enter the first number \n");
    scanf("%d",&operators.a1);
    printf("enter the second number \n");
    scanf("%d",&operators.b);

    printf("enter the correct number for ADD-0,SUBTRACT-1,MULTIPLY-3\n");
    scanf("%d",&operators.a);
    switch(operators.a){
      case ADD:
      operators.c=operators.a1+operators.b;
      printf("ADD %d %d",operators.a1, operators.b);
      printf(" %d",operators.c);
      break;
      case SUBTRACT:
      operators.c=operators.a1-operators.b;
      printf("SUBTRACT %d %d  ",operators.a1, operators.b);
      printf(" %d",operators.c);

      break;
      case MULTIPLY:
      operators.c=operators.a1*operators.b;
      printf("MULTIPLY %d %d ",operators.a1,operators.b);
      printf(" %d",operators.c);
      break;
      default:
      printf("Invalid PERSON value entered.\n");
            break;
    }
    return 0;      
      
      


       

}
