// WAP to enter 10 elements of array at run time and sort the elements of array.
#include<stdio.h>
// #include<conio.h>

void sort(int arr[10]) {
    for(int i=0; i<10; i++) {
        for(int j=i+1; j<10; j++) {
            if(arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void main() {
    // clrscr();

    int arr[10];

    printf("Enter the 10 elements of array: ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr);

    printf("\nPrinting the sorted array:\n");
    for(int i=0; i<10; i++) {
        printf("%d\t", arr[i]);
    }

    // getch();
}