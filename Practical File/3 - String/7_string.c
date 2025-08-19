// WAP to concate two strings using strcat() function
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
	// clrscr();
	char a[50] = "Mewar";
	char b[50] = " Institute";

	printf("First string is: %s", a);
	printf("\nSecond string is: %s", b);

	strcat(a, b);

	printf("\nThe Concatenated string is: %s", a);

	// getch();
}