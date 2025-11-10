/*Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record*/
#include <stdio.h>
int main(){
    FILE *fp;
    int n;
    char intro[50];
    int t,s;
    fp=fopen( "student.txt", "r+w");
    if(fp==NULL){
        printf("error:file not present");

    }
    printf("enter the number of students : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter name of student :");
        scanf("%s",&intro[i]);
        
        printf("enter roll no: ");
        scanf("%d",&t);

        printf("enter  marks: ");
        scanf("%d",&s);
     fprintf(fp,"%s %d %d \n",intro,t,s);
    }
    
     printf("\n--- Student Records ---\n");
    
     for(int i=0;i<n;i++){
     fscanf(fp, "%s %d %d", intro, &t, &s);
     printf("Name: %s, Roll: %d, Marks: %d\n",intro,t,s);}
    
 fclose(fp);
     return 0;


    

}