/*Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp;
    char intro[100];
    int count=0;
    int count1=0;
    int count2=0;
    fp = fopen( "info1.txt", "r" );
    if(fp==NULL){
        printf("file not present, error!!!");

    }
    
        fgets(intro,sizeof(intro),fp);
        for(int i=0;i<=sizeof(intro);i++){
            if(intro[i]==' ')
            {count++;}
        }
        for(int i=0;i<=strlen(intro);i++){
            if(intro[i]=='.')
            {count1++;}
        }
        for(int i=0;i<=strlen(intro);i++){
            if ((intro[i] >= 'a' && intro[i] <= 'z') || (intro[i] >= 'A' && intro[i] <= 'Z'))

            {count2++;}
        }

    fclose(fp);
    printf("words=%d\n",count);
    printf("lines=%d\n",count1);
    printf("letters=%d\n",count2);

    return 0;
    
}