// WAP to find the addition of two 3*3 matrix elements. Print both original matrix and also print the multiplication of matrices.
#include<stdio.h>
// #include<conio.h>

void multiplicationOfMatrices(int a[3][3], int b[3][3], int mul[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            mul[i][j] = 0;
            for(int k=0; k<3; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void sumOfMatrices(int a[3][3], int b[3][3], int sum[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
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

    int a[3][3], b[3][3], sum[3][3], mul[3][3];

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

    sumOfMatrices(a, b, sum);
    multiplicationOfMatrices(a, b, mul);

    printf("\nPrinting the first matrix:\n");
    printMatrix(a);

    printf("\nPrinting the second matrix:\n");
    printMatrix(b);

    printf("\n\nPrinting the addition matrix:\n");
    printMatrix(sum);

    printf("\nPrinting the multiplication matrix:\n");
    printMatrix(mul);

    // getch();
}