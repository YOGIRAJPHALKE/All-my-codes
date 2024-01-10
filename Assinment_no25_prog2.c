#include <stdio.h>
#include <stdbool.h>

void Display(char cValue)
{
    if ((cValue >= 65) && (cValue <= 90))
    {
        printf("%c", cValue + 32);
    }
    else if ((cValue >= 97) && (cValue <= 122))
    {
        printf("%c", cValue - 32);
    }
    else
    {
        printf("%c", cValue);
    }
}

int main()
{
    char ch = '\0';

    printf("Enter the char :");
    scanf("%c", &ch);

    Display(ch);
    return 0;
}

// gcc Assinment_no25_prog2.c -o myexe