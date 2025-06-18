// WAP to copy one string into another using strcpy() function.
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
    // clrscr();

    char s1[30], s2[30];

    printf("Enter the string: ");
    gets(s1);

    printf("\nFirst string is: %s", s1);

    strcpy(s2, s1);

    printf("\nCopied string is: %s", s2);

    // getch();
}