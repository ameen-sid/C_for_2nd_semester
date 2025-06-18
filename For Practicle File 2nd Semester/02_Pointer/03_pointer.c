// 3) WAP to assign the pointer value to another variable
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int a = 5, b;
	int* p = &a;

	b = *p;

	printf("The value of a: %d and b: %d", a, b);
	printf("\nThe address of a: %u and b: %u", p, &b);

	// getch();
}