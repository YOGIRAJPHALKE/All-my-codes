 #include<stdio.h>

void nonFact(int iNo)
{
int i=0;
    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(i=(iNo/2);i>=1;i--)
    {
        if((iNo % i)==0){
            printf("%d ",i);
        }
        
    }
}
int main()
{  
int iValue=0;

printf("Enter number \n");
scanf("%d",&iValue);

 nonFact(iValue);
    return 0;
}

