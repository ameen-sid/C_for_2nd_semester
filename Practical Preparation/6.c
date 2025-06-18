// WAP to enter 3*3 arrays though keyboard and print all the elements of array.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[3][3];

    printf("Enter the elements of 3x3 matrix array: ");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPrinting the elements of 3x3 matrix array:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // getch();
}