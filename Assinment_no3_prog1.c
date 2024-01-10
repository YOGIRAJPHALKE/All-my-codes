 #include<stdio.h>

int PrintEven(int iNo)
{
int iCnt=0;
    if(iNo <= 0)
    {
        return 0;
    }
    for(iCnt=2;iCnt<=(iNo*2);iCnt++)
    {
        printf("%d ",iCnt);
        iCnt++;
    }
}
int main()
{  
int iValue1=0;

printf("Enter number \n");
scanf("%d",&iValue1);
 PrintEven(iValue1);
    return 0;
}