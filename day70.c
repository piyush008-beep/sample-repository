#include <stdio.h>
#include <string.h>

int main() {
    FILE *fileptr;
    fileptr = fopen("piyush.txt", "w");
    if (fileptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char str[50];
    printf("Enter the text (max 50 characters): ");
    scanf(" %[^\n]", str); 

 
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Modified text: %s\n", str);

    fputs(str, fileptr);
    fclose(fileptr);

    
    return 0;
}
