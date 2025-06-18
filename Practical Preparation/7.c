// WAP to find the addition of two 3*3 matrix elements. Print both original matrix and also print the sum of matrices.
#include<stdio.h>
// #include<conio.h>

void sum(int a[3][3], int b[3][3], int result[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void printMatrix(int arr[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void main() {
    // clrscr();

    int a[3][3], b[3][3], result[3][3];

    printf("Enter the elements of first 3x3 matrix: ");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of second 3x3 matrix: ");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    sum(a, b, result);

    printf("\nPrinting the elements of first 3x3 matrix:\n");
    printMatrix(a);

    printf("\nPrinting the elements of second 3x3 matrix:\n");
    printMatrix(b);

    printf("\n\nPrinting the elements of resultant matrix:\n");
    printMatrix(result);


    // getch();
}