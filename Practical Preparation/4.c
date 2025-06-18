// WAP to initialize 2*2 array and print all the elements.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[2][2] = {
                        {1, 2},
                        {3, 4}
                    };

    printf("Printing the elements of 2x2 matrix:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // getch();
}