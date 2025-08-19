// WAP to initialize 2*2 array and print all the elements and also print the sum and average of all elements.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[2][2] = {
        {1, 2},
        {3, 4}
    };
    int sum = 0;

    printf("Printing the elements of 2x2 array:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            sum += arr[i][j];
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nSum: %d", sum);
    printf("\nAverage: %f", (float)sum/4);

    // getch();
}