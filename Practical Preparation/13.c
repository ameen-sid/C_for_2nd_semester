// WAP to find the area of circle using macro. (pie and radius is defined as macro);
#include<stdio.h>
// #include<conio.h>

#define PI 3.14
#define RADIUS 2

void main() {
    // clrscr();

    float area = PI * RADIUS * RADIUS;

    printf("The Area of Circle is %0.2f", area);

    // getch();
}