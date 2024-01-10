#include <stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iAns = 0;
    if (iNo1 < 0 || iNo1 > iNo2)
    {
        iAns = 0;
    }
    else
    {
        for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            iAns = iAns + iCnt;
        }
    }
    return iAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point \n");
    scanf("%d", &iValue1);

    printf("Enter Ending point \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    if (iRet == 0)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Addition is %d", iRet);
    }
    return 0;
}
