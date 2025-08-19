// WAP to enter and print any string and also count and print the vowels in the given string
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char str[100];
	int i, count = 0;

	printf("Enter any string: ");
	gets(str);

	printf("\nPrinting the string: %s", str);

	printf("\nPrinting the vowels: \n");
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			count++;
			printf("%c\t", str[i]);
		}
	}

	printf("\nThe total no of vowels in the string is %d", count);

	// getch();
}