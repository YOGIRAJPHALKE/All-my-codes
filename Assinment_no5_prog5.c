#include<stdio.h>

float Multiply(int iNo1,int iNo2)
{
float iAns=0;


iAns=(((iNo2)/iNo1))*(100);
return iAns;

}

int main()
{
int iValue1=0,iValue2=0;
float iRet=0;

printf("Enter Total Marks \n");
scanf("%d",&iValue1);

printf("Enter obtained Marks \n");
scanf("%d",&iValue2);

 iRet=Multiply(iValue1,iValue2);
 
 printf(" percentage is %f \n ",iRet);
return 0;
}