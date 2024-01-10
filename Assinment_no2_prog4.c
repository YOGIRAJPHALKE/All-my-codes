
#include<stdio.h>

void Display(int iNo,int iFrequncy)
{
    int iCnt=0;
    
    for(iCnt=1;iCnt<=iFrequncy;iCnt++)
    {
        printf("%d  ",iNo);

    }
}


int main()
{
    
int iValue=0;
int iCount=5;
 printf("Enter number ");
    scanf("%d", &iValue);
     printf("Enter number ");
    scanf("%d", &iCount);
    Display(iValue,iCount);
    return 0;
}
