/*Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.*/

#include <stdio.h>
int main(){
    char arr[50];
    FILE *fp;
    fp=fopen("sample.txt","r");
    if( fp == NULL){
        printf("such file does not  exist");
        return 1;
    }
    
        printf("succh file exists\n");
        fgets(arr,sizeof(arr),fp);
        printf("%s",arr);
        fclose(fp);
        return 0;
    
}