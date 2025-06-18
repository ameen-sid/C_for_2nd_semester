// WAP to accept 10 float element using array through keyboard and print all elements.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    float arr[10];

    printf("Enter the 10 float elements: ");
    for(int i=0; i<10; i++) {
        scanf("%f", &arr[i]);
    }

    printf("\nPrinting the elements of array:\n");
    for(int i=0; i<10; i++) {
        printf("%f\t", arr[i]);
    }

    // getch();
}