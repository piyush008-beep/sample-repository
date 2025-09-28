//Count even and odd numbers in an 1d array
#include <stdio.h>
int main(){
int count=0;
int pi=0;
int result;
int array[14] = {1,2,3,5};
for (int m=0;m<=3;m++ )

   
    
       { result=(array[m])%2;
        if ( result==0 ){
        count++;
      }
        else {
        pi++;
       }
    }
     printf("even are %d\n",count++);
  printf("odd are %d\n",pi++);
  
    return 0;

}