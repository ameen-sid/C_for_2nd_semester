// WAP to print the value of an element using pointer and also print the address of elements.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[10];

    printf("Enter the 10 elements of array: ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("\nPrinting the value of array using pointer:\n");
    for(int i=0; i<10; i++) {
        printf("%d: %u\n", *(ptr+i), ptr);
    }

    // getch();
}