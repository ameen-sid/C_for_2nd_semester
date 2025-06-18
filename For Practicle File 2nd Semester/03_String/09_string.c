// 9) WAP to convert all the characters of string into lowercase letter using strlwr() function
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
	// clrscr();
	char a[50];

	printf("Enter any string: ");
	gets(a);

	strlwr(a);

	printf("\nThe string converter into lowercase is: %s", a);

	// getch();
}