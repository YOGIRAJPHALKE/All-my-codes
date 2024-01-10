
#include <stdio.h>
#include <stdbool.h>
bool CheckCapital(char cValue)
{
    if (((cValue >= 65) && (cValue <= 90)) || ((cValue >= 61) && (cValue <= 122)))
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
        printf("it is Character");
    }
    else
    {
        printf("it is not Character");
    }
    return 0;
}

// gcc Assinment_no24_prog1.c -o myexe
