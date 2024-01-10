#include <stdio.h>

void strtoggelX(char str[])
{

    while (*str != '\0')
    { 
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String \n");
    scanf("%[^'\n]s", Arr);

    strtoggelX(Arr);

    printf("Modified String is : %s \n", Arr);
    return 0;
}

// gcc Assinment_no27_prog3.c -o myexe
