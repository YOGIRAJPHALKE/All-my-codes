
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNo)
{
    if((iNo/2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    
int iValue=0;
BOOL bRet=FALSE;
    
    printf("Enter number ");
    scanf("%d",&iValue);

bRet=CheckEven(iValue);
    if(bRet==TRUE)
    {
         printf("number is even");
    }
    else{
         printf("number is odd");
    }
    return 0;
}
