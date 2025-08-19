// WAP to create a structure of student, which accepts the following information (SName, FatherName , RollNo, Class, Address, Height, Weight).
#include<stdio.h>
// #include<conio.h>

struct Student {
    char sName[20], fatherName[20], address[50], class[10];
    int rollNo;
    float height, weight;
};

void main() {
    // clrscr();

    struct Student s1;

    printf("Enter the details of student:\n");

    printf("Name: ");
    gets(s1.sName);
    
    printf("Father Name: ");
    gets(s1.fatherName);

    printf("Class: ");
    gets(s1.class);

    printf("Address: ");
    gets(s1.address);

    printf("Roll No: ");
    scanf("%d", &s1.rollNo);

    printf("Height: ");
    scanf("%f", &s1.height);

    printf("Weight: ");
    scanf("%f", &s1.weight);

    printf("\n\nPrinting the Details of Student:\n");
    printf("Name: %s", s1.sName);
    printf("\nFather Name: %s", s1.fatherName);
    printf("\nRoll No: %d", s1.rollNo);
    printf("\nClass: %s", s1.class);
    printf("\nAddress: %s", s1.address);
    printf("\nHeight: %0.2f", s1.height);
    printf("\nWeight: %0.2f", s1.weight);

    // getch();
}