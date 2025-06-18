// 12) WAP to convert all the characters of string into uppercase letter without using strupr() function
#include<stdio.h>
// #include<conio.h>

char upper(char c) {
	return (c - 'a') + 'A';
}

void main() {
	// clrscr();
	char a[50];
	int i;

	printf("Enter any string: ");
	gets(a);

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			a[i] = upper(a[i]);
		}
	}

	printf("\nThe string converter into uppercase is: %s", a);

	// getch();
}