#include <stdio.h>
#include <string.h> 
#include <ctype.h>  

int main() {
    char full_name[100];
    int last_space_pos = -1; 

    printf("Enter a full name: ");
    
    fgets(full_name, sizeof(full_name), stdin);

    
    full_name[strcspn(full_name, "\n")] = 0;

    
    int len = strlen(full_name);
    for (int i = len - 1; i >= 0; i--) {
        if (full_name[i] == ' ') {
            last_space_pos = i;
            break; 
        }
    }

    printf("Formatted Name: ");

   
    if (last_space_pos == -1) {
        
        printf("%s", full_name);
    } else {
        
        printf("%c. ", toupper(full_name[0]));

        
        for (int i = 1; i < last_space_pos; i++) {
            
            if (full_name[i - 1] == ' ' && full_name[i] != ' ') {
                printf("%c. ", toupper(full_name[i]));
            }
        }

       
        printf("%s", &full_name[last_space_pos + 1]);
    }

    printf("\n");

    return 0;
}