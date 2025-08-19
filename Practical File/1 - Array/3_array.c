// WAP to initialize a static array and display its elements
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int arr[10] = { 0 };
	int i;

	printf("Displaying the elements of array: \n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}

	// getch();
}