// WAP to print the sum of all diagonal elements of any 3*3 matrix entered through keyboard.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[3][3], mainDiagonal = 0, offDiagonal = 0;

    printf("Enter the elements of 3x3 matrix: ");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i == j) {
                mainDiagonal += arr[i][j];
            }
            
            if(i + j == 2) {
                offDiagonal += arr[i][j];
            }
        }
    }

    printf("\nSum of Main Diagonal is %d", mainDiagonal);
    printf("\nSum of Off-Diagonal is %d", offDiagonal);

    // getch();
}