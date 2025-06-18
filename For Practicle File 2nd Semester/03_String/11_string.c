// 11) WAP to convert all the characters of string into uppercase letter using strupr() function
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
	// clrscr();
	char a[50];

	printf("Enter any string: ");
	gets(a);

	strupr(a);

	printf("\nThe string converter into uppercase is: %s", a);

	// getch();
}