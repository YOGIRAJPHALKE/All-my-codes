#include <stdio.h>

int Factorial(int iNo)
{
    int i = 0;
    int iAns = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (i = iNo; i > 0; i--)
    {
        iAns = iAns * i;
    }
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d \n", iRet);

    return 0;
}
