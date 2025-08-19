// WAP to print any string in to Lower case character and Upper case characters and string must be entered at run time.
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
    // clrscr();

    char str[50];

    printf("Enter any string: ");
    gets(str);

    printf("\nOriginal String: %s", str);
    printf("\nString in lowercase: %s", strlwr(str));
    printf("\nString in uppercase: %s", strupr(str));

    // getch();
}