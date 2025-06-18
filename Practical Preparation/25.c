// WAP to copy one string into another without using library function.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    char s1[30], s2[30];

    printf("Enter any string: ");
    gets(s1);

    for(int i=0; s1[i]!='\0'; i++) {
        s2[i] = s1[i];
    }

    printf("Original String: %s", s1);
    printf("\nCopied String: %s", s2);

    // getch();
}