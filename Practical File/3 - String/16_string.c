// WAP to copy one string into another without using strcpy() function
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char str1[50] = "Mewar Institute";
	char str2[50];
	int i;

	for (i = 0; str1[i] != '\0'; i++) {
		str2[i] = str1[i];
	}

	printf("string 1 is %s", str1);
	printf("\nString 2 is %s", str2);

	// getch();
}