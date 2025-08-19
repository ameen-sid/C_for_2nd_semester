// WAP to concate two string using pointer
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char str1[50] = "Mewar ";
	char str2[50] = "Institute";
	char* ptr = str1;

	printf("First String is: %s", str1);
	printf("\nSecond String is: %s", str2);

	for (int i = 0; str1[i] != '\0'; i++) {
		ptr++;
	}

	for (int i = 0; str2[i] != '\0'; i++) {
		*ptr = str2[i];
		ptr++;
	}

	printf("\nConcatenated String is: %s", str1);

	// getch();
}