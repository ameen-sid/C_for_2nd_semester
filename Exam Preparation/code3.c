#include<stdio.h>

int main() {
    FILE *ptr;
    
    ptr = fopen("text.txt", "r");
    
    char str[100];
    fgets(str, 100, ptr);
    fclose(ptr);
    
    ptr = fopen("another.txt", "w");
    
    fputs(str, ptr);
    fclose(ptr);
    
    return 0;
}