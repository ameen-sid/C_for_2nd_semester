// 2) WAP to initialize float value of array and display elements of array
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	float arr[5] = { 2.7, 89.9, 28.90, 10.0, 38.67 };
	int i;

	printf("Displaying the elements of array: \n");
	for (i = 0; i < 5; i++) {
		printf("%0.2f\t", arr[i]);
	}

	// getch();
}