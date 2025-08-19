// WAP to reverse any string using strrev() function
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
	// clrscr();
	char str[50];

	printf("Enter any string: ");
	gets(str);

	strrev(str);

	printf("\nReversed String is: %s", str);

	// getch();
}