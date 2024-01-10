
#include <stdio.h>
#include <stdbool.h>
bool CheckCapital(char cValue)
{
    if ((cValue == '!') || (cValue == '@') || (cValue == '#') || (cValue == '$') || (cValue == '%') || (cValue == '^') || (cValue == '&') || (cValue == '*'))
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
        printf("it is Special charater");
    }
    else
    {
        printf("it is not Spacial charater");
    }
    return 0;
}

// gcc Assinment_no25_prog4.c -o myexe
