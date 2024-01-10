#include <stdio.h>

int OddFactorial(int iNo)
{
    int i=0;
    int iAns = 0;
    int iOddAns = 1;
    int iEvenAns = 1;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 2; i <= iNo; i++)
    {
        iEvenAns = iEvenAns * i;
        i++;
    }

    for (i = 1; i <= iNo; i++)
    {
        iOddAns = iOddAns * i;
        i++;
    }

    iAns = iEvenAns - iOddAns;
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is %d \n", iRet);
    return 0;
}
