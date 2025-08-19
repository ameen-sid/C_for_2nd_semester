// WAP to enter data of student using structure whose element name with 20 characters, age and roll no of integer and class with 10 characters also print the same
#include<stdio.h>
// #include<conio.h>

struct Student {
    char name[20], class[10];
    int age, roll_no;
};

void main() {
    // clrscr();
    struct Student s1;

    printf("Enter the name of student: ");
    gets(s1.name);

    printf("\nEnter the age of student: ");
    scanf("%d", &s1.age);

    printf("\nEnter the class of student: ");
    // gets(s1.class);
    scanf("%s", &s1.class);

    printf("\nEnter the roll no of student: ");
    scanf("%d", &s1.roll_no);

    printf("\nPrinting the Details of student: \n");
    printf("Name: %s", s1.name);
    printf("\nAge: %d", s1.age);
    printf("\nClass: %s", s1.class);
    printf("\nRoll No: %d", s1.roll_no);

    // getch();
}