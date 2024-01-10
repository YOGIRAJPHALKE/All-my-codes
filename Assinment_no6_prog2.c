 #include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
int i=0;

    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {  
        printf("%d  ",i);
    }
	
}
int main()
{  
int iValue=0;

printf("Enter number \n");
scanf("%d",&iValue);

 Display(iValue);
 
    return 0;
}

