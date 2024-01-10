#include <stdio.h>

int Addition(int no1, int no2)
{
    int ans;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int Value1 = 0;
    int Value2 = 0;
    int ret = 0;
    printf("Enter the 1st number : \n");
    scanf("%d", &Value1);

    printf("Enter the 2st number : \n");
    scanf("%d", &Value2);

    ret = Addition(Value1, Value2);

    printf("addition is : %d ", ret);

    return 0;
}