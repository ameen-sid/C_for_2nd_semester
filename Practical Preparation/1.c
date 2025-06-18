// WAP to initialize an array of 10 elements and print all elements of array.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Printing the elements of array:\n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }

    // getch();
}