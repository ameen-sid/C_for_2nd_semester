// WAP to write the text to any file using file.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    char text[50];

    printf("Enter any text to write in file: ");
    gets(text);

    FILE *ptr;

    ptr = fopen("file.txt", "w");

    fputs(text, ptr);

    fclose(ptr);

    // getch();
}