// 1) WAP to initialize the value of array and display elements of array
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i;

	printf("Displaying the elements of array: \n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}

	// getch();
}