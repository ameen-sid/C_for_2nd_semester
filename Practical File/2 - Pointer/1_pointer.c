// WAP to display the address of variable using pointer
#include<stdio.h>
// #include<conio.h>

void main() {
	// clrscr();
	int var = 45;
	int* p = &var;

	printf("The address of variable using pointer is %u", p);

	// getch();
}
