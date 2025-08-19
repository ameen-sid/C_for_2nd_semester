// WAP to print the elements of an array in reverse order.
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;

	printf("Printing the elements of array using pointer:\n");
	for (int i = 4; i >= 0; i--) {
		printf("arr[%d] = %d\n", i, *(ptr + i));
	}

	// getch();
}