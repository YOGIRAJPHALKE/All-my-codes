
#include <stdio.h>
#include <stdbool.h>
bool CheckCapital(char cValue)
{
    if ((cValue >= 65) && (cValue <= 90))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the char :");
    scanf("%c", &ch);

    bRet = CheckCapital(ch);
    if (bRet == true)
    {
        printf("it is Capital Charater");
    }
    else
    {
        printf("it is not capital Charater");
    }
    return 0;
}

// gcc Assinment_no24_prog2.c -o myexe
