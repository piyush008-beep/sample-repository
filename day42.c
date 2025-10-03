//Count vowels and consonants in a string.
#include <stdio.h>
int main(){
    char array[]="hello \0";
    int count=0;
    int count1=0;
for(int i=0;i[array]!='\0';i++){
    if(array[i]=='a'|| array[i]=='e'|| array[i]=='o'|| array[i]=='i' || array[i]=='u'){
        count++;
        

    }
    else{
        count1++;
        
    }
    
}printf("%d \n",count);
printf("total no of consonants are %d \n",count1-1);
return 0;
}