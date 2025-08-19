// WAP to compare two string without using strcmp() function
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char a[50], b[50];
	int len1 = 0, len2 = 0, i;

	printf("Enter first string: ");
	gets(a);

	printf("Enter second string: ");
	gets(b);

	for (i = 0; a[i] != '\0'; i++) {
		len1++;
	}

	for (i = 0; b[i] != '\0'; i++) {
		len2++;
	}

	if (len1 == len2) {
		printf("\nBoth strings are equal");
	}
	else {
		if (len1 > len2) {
			printf("\nFirst is greater");
		}
		else {
			printf("\nSecond is greater");
		}
	}

	// getch();
}