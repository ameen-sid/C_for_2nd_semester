// WAP to create an array of 5 elements and print their elements with addresses
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int arr[5], i;

	printf("Enter 5 integers for the array: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\n\nDisplaying the elements of array with their address: \n");
	for (i = 0; i < 5; i++) {
		printf("arr[%d]: %d %u\n", i, arr[i], &arr[i]);
	}

	// getch();
}