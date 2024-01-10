 #include<stdio.h>

int MultFact(int iNo)
{
int i=0;
int iAns=1;
    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo/2;i++)
    {
        if((iNo % i)==0){
            printf("%d ",i);
            iAns=iAns*i;
        }
        
    }
    return iAns;
}
int main()
{  
int iValue1=0;
int iRet=0;

printf("Enter number \n");
scanf("%d",&iValue1);

 iRet=MultFact(iValue1);
 printf("\n%d \n",iRet);
    return 0;
}

