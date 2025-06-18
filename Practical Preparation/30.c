// WAP to print any statement using string and also count the no of vowels in the statement.
#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();

    char str[30];
    int count = 0;

    printf("Enter any string: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    printf("The no of vowels in the string is %d", count);


    // getch();
}