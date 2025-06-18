// WAP to show the use of #define and #undef macro.
#include<stdio.h>
// #include<conio.h>

#define PI 3.14

void main() {
    // clrscr();

    printf("First Value of Macro is %0.2f", PI);

    #undef PI

    // Error Because accressing the undefined marco
    // printf("\nValue of Macro after undefine it %0.2f", PI);
    printf("\nThe Marco is Undefined means deleted");

    #define PI2 50

    printf("\nSecond value of Macro is %d", PI2);

    // getch();
}