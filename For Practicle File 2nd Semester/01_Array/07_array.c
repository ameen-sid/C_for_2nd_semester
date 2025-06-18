// 7) WAP to initialize 4x3 matrix form and display the elements in matrix form
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int matrix[4][3] = {
							{1, 2, 3},
							{4, 5, 6},
							{7, 8, 9},
							{5, 6, 8}
	};
	int i, j;

	printf("Displaying the 4x3 array in matrix form:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	// getch();
}