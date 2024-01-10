#include <stdio.h>
#include <stdbool.h>

void Display(char ch)
{
    printf("Charater : %c\n", ch);
    printf("Decimal : %d\n", ch);
    printf("Ocatal : %o\n", ch);
    printf("Hexadecimal : %x\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the char :");
    scanf("%c", &cValue);

    Display(cValue);
    return 0;
}

// gcc Assinment_no25_prog5.c -o myexe