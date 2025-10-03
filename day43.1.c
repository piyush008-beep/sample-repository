//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    puts("enter the string");
    scanf("%[^\n]",str);
    int k=0;
    int size=0;
    while(str[k]!='\0')
    {size++;
    k++;}
    for(int i=0,j=size-1;j>=i;j--,i++){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        if(str[i]==str[j]){
            
            printf("the string is a palindrome");
        break;}
        else{
                printf("the string is not palindrome");
                break;
            }
            
        }
    

  return 0;
    
}