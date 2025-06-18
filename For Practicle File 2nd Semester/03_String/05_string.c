// 5) WAP to find out the lenght of the string using strlen() function
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
	// clrscr();
	char str[50];

	printf("Enter any string: ");
	gets(str);

	printf("The of the string is %d", strlen(str));

	// getch();
}