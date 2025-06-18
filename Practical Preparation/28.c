// WAP to print the reverse order of any string without using library function.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    char str[30], revStr[30];

    printf("Enter any string: ");
    gets(str);

    int len = 0;
    for(int i=0; str[i]!='\0'; i++) {
        len++;
    }
    
    for(int i=0, j=len-1; i<len; i++, j--) {
        revStr[i] = str[j];
    }
    revStr[len] = '\0';

    printf("Original String: %s", str);
    printf("\nReversed String: %s", revStr);

    // getch();
}