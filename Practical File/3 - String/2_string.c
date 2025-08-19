// WAP to enter any string by user and print that string
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char str[30];

	printf("Enter any string: ");
	// scanf("%s", &str);
	gets(str);

	printf("The string is '%s'", str);

	// getch();
}