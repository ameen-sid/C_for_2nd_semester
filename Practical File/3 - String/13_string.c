// WAP to compare two string using strcmp() function
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
	// clrscr();
	char a[50], b[50];

	printf("Enter first string: ");
	gets(a);

	printf("Enter second string: ");
	gets(b);

	if (strcmp(a, b) == 0) {
		printf("\nBoth strings are equal");
	}
	else {
		if (strcmp(a, b) > 0) {
			printf("\nFirst is greater");
		}
		else {
			printf("\nSecond is greater");
		}
	}

	// getch();
}