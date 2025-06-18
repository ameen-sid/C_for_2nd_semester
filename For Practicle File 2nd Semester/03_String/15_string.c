// 15) WAP to copy one string into another using strcpy() function
#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main() {
	// clrscr();
	char str1[50] = "Mewar Institute";
	char str2[50];

	strcpy(str2, str1);

	printf("string 1 is %s", str1);
	printf("\nString 2 is %s", str2);

	// getch();
}