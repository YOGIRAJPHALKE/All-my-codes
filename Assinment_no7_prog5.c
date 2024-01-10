#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int i = 0;
    int iAns = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 10; i >=1; i--)
    {
        printf("%d ", (iNo * i));
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}
