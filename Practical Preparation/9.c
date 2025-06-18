// WAP to enter 10 elements of array through keyboard and print the elememt and their address.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[10];

    printf("Enter the 10 elements for the array: ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting the elements of array:\n");
    for(int i=0; i<10; i++) {
        printf("%d: %u\n", arr[i], &arr[i]);
    }

    // getch();
}