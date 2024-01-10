#include <stdio.h>

void RangeDisplayEven(int iNo1, int iNo2)
{
    int iCnt = 0;
    if (iNo1 % 2 == 1)
    {
        iNo1 = iNo1 + 1;
    }
    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        printf("%d ", iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue1 = 0.0, iValue2 = 0.0;

    printf("Enter Starting point \n");
    scanf("%d", &iValue1);

    printf("Enter Ending point \n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
