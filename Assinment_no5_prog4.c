#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
int iAns=0;
if(iNo1==0)
{
iNo1=1;
}
if(iNo2==0)
{
iNo2=0;
}
if(iNo3==0)
{
iNo3=1;
}

if((iNo1==0) && (iNo2==0) && (iNo3==0))
{
	return 0;
}

iAns=(iNo1*iNo2)*iNo3;
return iAns;

}

int main()
{
int iValue1=0,iValue2=0,iValue3=0;
int iRet=0;

printf("Enter numbers \n");
scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

 iRet=Multiply(iValue1,iValue2,iValue3);
 //iRet=iValue1*iValue2*iValue3;
 printf("Multiplication is %d \n ",iRet);
return 0;
}