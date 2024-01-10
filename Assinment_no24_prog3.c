
#include <stdio.h>
#include <stdbool.h>
bool CheckCapital(char cValue)
{
    if ((cValue >= 48) && (cValue <= 57))
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
        printf("it is Digit");
    }
    else
    {
        printf("it is not Digit");
    }
    return 0;
}

// gcc Assinment_no24_prog3.c -o myexe
