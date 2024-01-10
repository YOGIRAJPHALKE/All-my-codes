#include <stdio.h>

int countDigit(char str[])
{
    int iCnt=0;

    while(*str !='\0')
    {
        if ((*str>='0') && (*str<='9')){
        printf("%d",*str);
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter the String \n");
    scanf("%[^'\n]s",Arr);


    iRet=countDigit(Arr);

printf("Count of Digit a is : %d \n",iRet);
    return 0;
}

// gcc Assinment_no27_prog4.c -o myexe
