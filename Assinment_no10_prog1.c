#include <stdio.h>

void RangeDisplay(int iNo1,int iNo2)
{
   int iCnt=0;
   for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
   {
    printf("%d ",iCnt);
   }
    
}
int main()
{
    int iValue1 = 0.0, iValue2 = 0.0;
  
    printf("Enter Starting point \n");
    scanf("%d", &iValue1);

    printf("Enter Ending point \n");
    scanf("%d", &iValue2);

   RangeDisplay(iValue1, iValue2);
    
    return 0;
}
