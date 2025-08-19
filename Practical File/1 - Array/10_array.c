// WAP to display character array with their address
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	char arr[5] = { 'A', 'R', 'C', 'H', 'O' };
	int i;

	printf("Printing the character array elements with their address: \n");
	for (i = 0; i < 5; i++) {
		printf("%c\t%u\n", arr[i], &arr[i]);
	}

	// getch();
}