// WAP to get 10 integers enter by user and print the elements of array
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int arr[10], i;

	printf("Enter 10 integers for the array: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\n\nDisplaying the elements of array: \n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}

	// getch();
}