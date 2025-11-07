#include <stdio.h>
int main(){
    FILE *fp;
    FILE *fp1;
    char intro[100];
    fp=fopen("info1.txt","r");
    fp1=fopen("info2.txt","w");
    if(fp==NULL || fp1==NULL){
        printf("ERROR!!");
        return 1;

    }
    
    
    if(fgets(intro,sizeof(intro),fp)){
    fprintf(fp1,"text that is read from info1.txt %s",intro);}
    else{
        printf("fiel not found");
    }
    

    fclose(fp);
    fclose(fp1);
    printf("data succesfully stored");
    return 0;

}