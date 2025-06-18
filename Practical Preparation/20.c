// WAP to print all the character of any string character by character.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    char str[50] = "Mewar Institute";

    for(int i=0; str[i]!='\0'; i++) {
        printf("%c ", str[i]);
    }

    // getch();
}