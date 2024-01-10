 #include<stdio.h>

int nonFact(int iNo)
{
    int iCnt=0;
int i=0;
int iAns=0;
    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo/2;i++)
    {
        if((iNo % i)!=0){
            for(iCnt=i;iCnt>0;iCnt--){
                iAns=iAns+iCnt;
                // printf("%d ",iAns);
            }
        } 
        
    }
	return iAns;
}
int main()
{  
int iValue=0;
int iRet=0;

printf("Enter number \n");
scanf("%d",&iValue);

 iRet=nonFact(iValue);
 printf("%d ",iRet);
    return 0;
}

