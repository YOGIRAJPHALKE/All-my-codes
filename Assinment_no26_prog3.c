#include <stdio.h>

int countCapital(char str[])
{
    int iCntCapital=0;
    int iCntSmall=0;

    while(*str !='\0')
    {
        if ((*str>='a') && (*str<='z')){
        iCntSmall++;
        }
        else if ((*str>='A') && (*str<='Z')){
        iCntCapital++;
        }
        }
        str++;
    
    return iCntSmall-iCntCapital;
}

int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter the String \n");
    scanf("%[^'\n]s",Arr);


    iRet=countCapital(Arr);

printf("%d \n",iRet);
    return 0;
}

// gcc Assinment_no26_prog3.c -o myexe
