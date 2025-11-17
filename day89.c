/*Show that enums store integers by printing assigned values.*/

#include <stdio.h>
enum stages{
    sucess,failure,timeout
};
typedef struct done{
    enum stages a;

}done;

int main(){
    struct done final;
    final.a=sucess;
    printf("sucess-> %d",final.a);
    final.a=failure;
    printf("failure-> %d",final.a);
    final.a=timeout;
    printf("timeout-> %d",final.a);
    return 0;

}