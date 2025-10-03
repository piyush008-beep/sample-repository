//Count characters in a string without using built-in length functions
#include <stdio.h>
#include <string.h>
int main(){
    
    char array[]="hello my name is piyush \0";
    int length = strlen(array);
   
    printf("number of characters in string is %d", length);
    return 0;
}