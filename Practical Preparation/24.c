// WAP to concatenate two string using strcat() function.
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
    // clrscr();

    char s1[30], s2[30];

    printf("Enter first string: ");
    gets(s1);
    
    printf("Enter second string: ");
    gets(s2);

    strcat(s1, " ");
    strcat(s1, s2);

    printf("\nConcatenated string is: %s", s1);

    // getch();
}