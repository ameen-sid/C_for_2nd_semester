// WAP to find out the length of the string without using strlen() function
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char str[50];
	int len = 0, i;

	printf("Enter any string: ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++) {
		len++;
	}

	printf("The of the string is %d", len);

	// getch();
}