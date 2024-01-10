#include <stdio.h>

int countWhite(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str == ' '))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String \n");
    scanf("%[^'\n]s", Arr);

    iRet = countWhite(Arr);

    printf("%d \n", iRet);
    return 0;
}

// gcc Assinment_no27_prog5.c -o myexe
