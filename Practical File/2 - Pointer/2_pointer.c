// WAP to display the value and address of variable using pointer
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int a = 45;
	int* ptr = &a;

	printf("The value of variable without pointer is %d", a);
	printf("\nThe address of variable without pointer is %u", &a);
	printf("\nThe value of variable with pointer is %d", *ptr);
	printf("\nThe Address of variable with pointer is %u", ptr);

	// getch();
}