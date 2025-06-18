// 5) WAP to create an array of 10 float numbers and print the elements of the array
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	float arr[10];
	int i;

	printf("Enter 10 float numbers for the array: ");
	for (i = 0; i < 10; i++) {
		scanf("%f", &arr[i]);
	}

	printf("\n\nDisplaying the elements of array: \n");
	for (i = 0; i < 10; i++) {
		printf("%0.2f\t", arr[i]);
	}

	// getch();
}