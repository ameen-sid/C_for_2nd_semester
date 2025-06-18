// 9) WAP to find the sum of 3x3 two matrices
#include<stdio.h>
// #include<conio.h>

void getElements(int arr[3][3]);
void sumOfTwoMatrices(int a[3][3], int b[3][3]);
void printElements(int arr[3][3]);

int result[3][3];

void main() {
	// clrscr();
	int a[3][3], b[3][3];
	int i, j;

	printf("Enter the elements of first matrix: ");
	getElements(a);

	printf("\nEnter the elements of second matrix: ");
	getElements(b);

	sumOfTwoMatrices(a, b);

	printf("\nDisplaying the elements of first matrix:\n");
	printElements(a);

	printf("\nDisplaying the elements of second matrix:\n");
	printElements(b);

	printf("\nPrinting the elements of resultant matrix:\n");
	printElements(result);

	// getch();
}

void getElements(int arr[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
}

void sumOfTwoMatrices(int a[3][3], int b[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}

void printElements(int arr[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}