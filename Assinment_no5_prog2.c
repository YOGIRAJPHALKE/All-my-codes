#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkGreater(int iNo)
{
if(iNo>100)
{
return TRUE;
}
else{
	return FALSE;
	}
}

int main()
{
int iValue=0;
BOOL iRet=FALSE;

printf("Enter number \n ");
scanf("%d",&iValue);

 iRet=chkGreater(iValue);
 if(iRet==TRUE)
 {
 printf("Greater");
 }
 else
 {
 printf("Smaller");
 }
return 0;
}