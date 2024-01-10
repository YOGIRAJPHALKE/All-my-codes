#include <stdio.h>

int DollerToINR(int iNo)
{
    int iAns = 1;
    iAns = iNo * 70;
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number of USD \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);
    printf("Value in INR is %d \n", iRet);

    return 0;
}
