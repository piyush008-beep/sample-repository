/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console
 until EOF (end of file) is reached.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char buffer[256]; 

    
    fp = fopen("piyush2.txt", "r");

    
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

   
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    
    fclose(fp);

    return 0;
}

