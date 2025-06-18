// WAP to show the difference between gets() and scanf() function to accept any statement.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    char s1[20], s2[20];

    printf("Enter first using gets: ");
    gets(s2);

    printf("Enter same as first string but using scanf: ");
    scanf("%s", &s1);

    printf("\nString that accepted using gets: %s", s2);
    printf("\nString that accepted using scanf: %s", s1);

    // getch();
}