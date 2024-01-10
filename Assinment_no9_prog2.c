#include <stdio.h>

double CircleArea(float fWidth, float fHight)
{
    double dAns = 0;
    const double PI = 3.14;

    dAns = (double)fWidth * fHight;

    return dAns;
}
int main()
{
    double fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Redius \n");
    scanf("%lf", &fValue1);

    printf("Enter Redius \n");
    scanf("%lf", &fValue2);

    dRet = CircleArea(fValue1, fValue2);
    printf("Area of circle is  %d \n", dRet);
    return 0;
}
