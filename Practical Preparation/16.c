// WAP to create a structure of 10 student as array , which accepts the following information (SName, FatherName , RollNo, Class, Address, Height, Weight).
#include<stdio.h>
// #include<conio.h>

struct Student {
    char sName[20], fatherName[20], address[50], class[10];
    int rollNo;
    float height, weight;
};

void main() {
    // clrscr();

    struct Student arr[10];

    printf("Enter the details of 10 student:\n");
    for(int i=0; i<10; i++) {
        printf("\nEnter the details of %d student\n", i+1);

        printf("Name: ");
        gets(arr[i].sName);
        
        printf("Father Name: ");
        gets(arr[i].fatherName);

        printf("Class: ");
        gets(arr[i].class);

        printf("Address: ");
        gets(arr[i].address);

        printf("Roll No: ");
        scanf("%d", &arr[i].rollNo);

        printf("Height: ");
        scanf("%f", &arr[i].height);

        printf("Weight: ");
        scanf("%f", &arr[i].weight);
    }

    printf("\n\nPrinting the Details of 10 Student:\n");
    for(int i=0; i<10; i++) {
        printf("\n\nPrinting the details of %d student:\n", i+1);
        printf("Name: %s", arr[i].sName);
        printf("\nFather Name: %s", arr[i].fatherName);
        printf("\nRoll No: %d", arr[i].rollNo);
        printf("\nClass: %s", arr[i].class);
        printf("\nAddress: %s", arr[i].address);
        printf("\nHeight: %0.2f", arr[i].height);
        printf("\nWeight: %0.2f", arr[i].weight);
    }

    // getch();
}