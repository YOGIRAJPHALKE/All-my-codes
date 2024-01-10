#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 1;
    iAns = iNo * 1000;
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number of USD \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("%d Km are %d meters \n", iValue,iRet);

    return 0;
}
