#include <stdio.h>


int CountOdd(int iNo)
{
    int iDigit = 0;
    int iAns=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit%2!=0)
        {
          iAns++;
        }
    }
    return iAns;
}

int main()
{

    int iValue = 0;
    int iRet=0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

   iRet= CountOdd(iValue);
 printf("%d\n",iRet);
    return 0;
}

// gcc Assinment_no12_prog2.c -o myexe