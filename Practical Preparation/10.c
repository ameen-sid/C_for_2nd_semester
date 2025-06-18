// WAP to accept the 20 integer elements through keyboard using array and print the even number list and odd number list.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int arr[20];

    printf("Enter the 20 elements for the array: ");
    for(int i=0; i<20; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting the Even elements list:\n");
    for(int i=0; i<20; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d\t", arr[i]);
        }
    }

    printf("\nPrinting the Odd elements list:\n");
    for(int i=0; i<20; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d\t", arr[i]);
        }
    }

    // getch();
}