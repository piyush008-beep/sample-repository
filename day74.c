/*Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination 
file using fgetc() and fputc().*/
#include <stdio.h>
int mainI(){
    char intro[50];
    FILE *fp;
    FILE *fp1;
    fp=fopen("source.txt","r");
    fp1=fopen("destination.txt","w");
    if( fp==NULL || fp1==NULL)
    {printf("error file not present !!!");}
    fgetc(intro,fp);
    fputc(intro,fp1);
    fclose(fp);
    fclose(fp1);
    


}