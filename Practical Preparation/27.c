// WAP to print the reverse order of any string using strrev();
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
    // clrscr();

    char str[30]; 

    printf("Enter any string: ");
    gets(str);

    printf("Original String: %s", str);
    printf("\nReversed String: %s", strrev(str));

    // getch();
}