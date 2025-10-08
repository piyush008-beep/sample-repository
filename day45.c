#include <stdio.h>
#include <string.h>
int main(){
    char str[]="my name is piyush";
    
    char *stri = str;
    str[0]='l';
    printf("%s",stri);
    int x = strlen(str);
    printf("%d",x);

    return 0;
}