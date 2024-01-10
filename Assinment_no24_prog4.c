
#include <stdio.h>
#include <stdbool.h>
bool CheckCapital(char cValue)
{
    if ((cValue >= 97) && (cValue <= 122))
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
        printf("it is Small case charater");
    }
    else
    {
        printf("it is not a Small case charater");
    }
    return 0;
}

// gcc Assinment_no24_prog4.c -o myexe
