// WAP to accept 10 integer elements though keyboard and print all elements, Sum of all Elements and average of elements.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[10];
    int sum = 0;

    printf("Enter the 10 elements of array: ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting the elements of array:\n");
    for(int i=0; i<10; i++) {
        sum += arr[i];
        printf("%d\t", arr[i]);
    }

    printf("\nSum: %d", sum);
    printf("\nAverage: %f", (float)sum/10);

    // getch();
}