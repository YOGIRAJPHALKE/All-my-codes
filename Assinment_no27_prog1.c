#include <stdio.h>

void strlwrx(char *str)
{
    

    while(*str !='\0')
    {
        if ((*str>='A')&&(*str<='Z'))
        {
        *str=*str+32;
        }
        str++;
    }
   
}

int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter the String \n");
    scanf("%[^'\n]s",Arr);


    strlwrx(Arr);

printf("Modified String is : %s \n",Arr);
    return 0;
}

// gcc Assinment_no27_prog1.c -o myexe
