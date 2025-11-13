/*Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination 
file using fgetc() and fputc().*/
#include <stdio.h>

int main() {
    FILE *fp = fopen("source.txt", "r");
    FILE *fp1 = fopen("destination.txt", "w");
    char ch;

    while (1) {
        ch = fgetc(fp);
        if (feof(fp))
            break;
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);
    printf("Copied successfully using char!\n");
    return 0;
}



