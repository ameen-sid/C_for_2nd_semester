// WAP to concate two strings without using strcat() function
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char a[50] = "Mewar";
	char b[50] = " Institute";
	int i, index = 0;

	printf("First string is: %s", a);
	printf("\nSecond string is: %s", b);

	for (i = 0; a[i] != '\0'; i++) {
		index++;
	}

	for (i = 0; b[i] != '\0'; i++) {
		a[index++] = b[i];
	}

	printf("\nThe Concatenated string is: %s", a);

	// getch();
}