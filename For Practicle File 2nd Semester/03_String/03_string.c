// 3) WAP to input any string and print character one by one
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char str[30];
	int i;

	printf("Enter any string: ");
	gets(str);

	printf("Printing the string: \n");
	for (i = 0; str[i] != '\0'; i++) {
		printf("%c\t", str[i]);
	}

	// getch();
}