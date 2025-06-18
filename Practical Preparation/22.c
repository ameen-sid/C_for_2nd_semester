// WAP to find the length of any string without using library function function.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    char str[] = "Mewar Institute";
    int len = 0;

    for(int i=0; str[i]!='\0'; i++) {
        len++;
    }

    printf("%s", str);
    printf("\nLength: %d", len);

    // getch();
}