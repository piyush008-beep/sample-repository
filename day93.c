/*Find and print the student with the highest marks.*/
#include <stdio.h>
enum student{Ravi,piyush,gin};
typedef struct marks{
    enum student a;
    int b;


}marks;
int main(){
    struct marks done[3];
    done[0].a=Ravi;

    printf("enter the ravi's marks");
    scanf("%d", &done[0].b);

    done[1].a=piyush;
    printf("enter the piyush marks");
    scanf("%d",&done[1].b);

    done[2].a=gin;
    printf("enter the gin marksrrr");
    scanf("%d",&done[2].b);
    int max=0;
    for(int i=0;i<3;i++){
     if(done[i].b>done[max].b){
        max=i;
     }}
     if(done[max].a==Ravi){
        printf("highest marks is of ravi %d\n",done[max].b);}
     else if(done[max].a==piyush){   
        printf("highest marks is of piyush %d\n",done[max].b);}
     else{  
        printf("highest marks is of gin %d \n",done[max].b);
     }
    
    
    


    return 0;

}