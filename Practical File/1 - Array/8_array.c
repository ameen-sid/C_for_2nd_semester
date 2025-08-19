// WAP to create an array of 10 elements and print the elements with their address and also find the sum of all elements
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int arr[10], i, sum = 0;

	printf("Enter the 10 elements of the array: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\nPrinting the elements of the array with their address:\n");
	for (i = 0; i < 10; i++) {
		printf("arr[%d]: %d %u\n", i, arr[i], &arr[i]);
		sum += arr[i];
	}

	printf("\nSum of all elements is %d", sum);

	// getch();
}