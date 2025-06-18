#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    
    file = fopen("text_three.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    FILE *tempFile;
    
    tempFile = fopen("temp.txt", "w");

    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        ch = toupper(ch);
        fputc(ch, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    remove("text_three.txt");
    rename("temp.txt", "text_three.txt");

    printf("Successfully converted all lowercase characters to uppercase in the file.\n");

    return 0;
}
