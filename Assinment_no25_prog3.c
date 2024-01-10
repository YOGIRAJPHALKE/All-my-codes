#include <stdio.h>
#include <stdbool.h>

void Display(char cValue)
{
    int i = 0;
    if ((cValue >= 65) && (cValue <= 90))
    {
        for (i = cValue; i <= 90; i++)
            printf("%c ", i);
    }
    else if ((cValue >= 97) && (cValue <= 122))
    {
        for (i = cValue; i <= 122; i++)
            printf("%c ", i);
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

// gcc Assinment_no25_prog3.c -o myexe