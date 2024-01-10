#include <stdio.h>

double CircleArea(double fRadius)
{
    double dAns = 0;
    const double PI = 3.14;

    dAns = (PI * fRadius * fRadius);
        printf("Area of circle is  %d \n", dAns);

    return dAns;
}
int main()
{
    double fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Redius \n");
    scanf("%d", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is  %d \n", dRet);
    return 0;
}
