// 18) WAP to reverse any string without using strrev() function
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char str[50];
	int len = 0, i, j;

	printf("Enter any string: ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	for (i = 0, j = len - 1; i <= j; j--, i++) {
		char t = str[i];
		str[i] = str[j];
		str[j] = t;
	}

	printf("\nReversed String is: %s", str);

	// getch();
}