
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkGreater(int iNo1,int iNo2)
{
if(iNo1==iNo2)
{
return TRUE;
}
else{
	return FALSE;
	}
}

int main()
{
int iValue1=0;
int iValue2=0;
BOOL iRet=FALSE;

printf("Enter two numbers \n ");
scanf("%d  %d",&iValue1,&iValue2);


 iRet=chkGreater(iValue1,iValue2);
 if(iRet==TRUE)
 {
 printf("Equal");
 }
 else
 {
 printf("Not Equal");
 }
return 0;
}