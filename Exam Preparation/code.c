#include<stdio.h>

int main() {
    FILE* ptr;

    ptr = fopen("text_one.txt", "r");

    char str[100];

    fgets(str, 100, ptr);
    fclose(ptr);

    FILE* ptr2;

    ptr2 = fopen("text_two.txt", "w");

    fputs(str, ptr2);

    fclose(ptr2);

    return 0;
}