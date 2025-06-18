// WAP to print any 5 digit number in reverse order and number should be entered through keyboard . (Hint: 12345 is printed as 54321)
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    int num, revNum = 0;

    printf("Enter the 5 digit number: ");
    scanf("%d", &num);

    int t = num;

    while(t > 0) {
        int rem = t % 10;
        revNum = (revNum * 10) + rem;
        t = t / 10;
    }

    printf("\nReversed Number: %d", revNum);

    // getch();
}