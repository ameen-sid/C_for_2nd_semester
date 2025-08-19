// WAP to convert all the characters of string into lowercase letter without using strlwr() function
#include<stdio.h>
// #include<conio.h>

char lower(char c) {
	return (c - 'A') + 'a';
}

void main() {
	// clrscr();
	char a[50];
	int i;

	printf("Enter any string: ");
	gets(a);

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			a[i] = lower(a[i]);
		}
	}

	printf("\nThe string converter into lowercase is: %s", a);

	// getch();
}