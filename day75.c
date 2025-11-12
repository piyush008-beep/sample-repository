/*Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.*/
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp;
    char intro[50];
    fp=fopen("data.txt","a");
    if (fp==NULL)
    {
    printf("ERRROR FILE NOT FOUND!!!!");

    }
    printf("enter the text which you have to add in data.txt\n ");
    scanf("%[^\n]s",intro);
    fgets(intro,sizeof(intro),fp);
    fprintf(fp,"this is the appended text %s\n",intro);
    fclose(fp);
    printf("text apppended sucessfully");
    return 0;
}