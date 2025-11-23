/*Store details of 5 students in an array of structures and print all.*/
#include <stdio.h>
typedef struct details{
    char name[10];
    int rollno;
    int batch;
    char branch[10];


}details;
int main(){
     details s[5];
     for(int i=0;i<5;i++){
        printf("enter student's name \n");
        scanf("%s",s[i].name);
        printf("enter student's rollno \n");
        scanf("%d",&s[i].rollno);
        printf("enter student's batchnumber\n");
        scanf("%d",&s[i].batch);
        printf("enter student's bracnch\n");
        scanf("%s",s[i].branch);}
        printf("| %-5s | %-20s | %-10s | %-10s |\n", "Roll", "Name", "batch" , "branch");
      for (int i = 0; i < 5; i++) {
        printf("| %-5d | %-20s | %-10d | %-10s |\n", s[i].rollno, s[i].name, s[i].batch, s[i].branch);
    }
 return 0;}