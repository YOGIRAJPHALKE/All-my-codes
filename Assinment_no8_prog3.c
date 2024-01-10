#include <stdio.h>

int EvenFactorial(int iNo)
{

    int i = 0;
    int iAns = 1;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 2; i <= iNo; i++)
    {
        iAns = iAns * i;
        i++;
    }
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial of number is %d \n", iRet);
    return 0;
}
