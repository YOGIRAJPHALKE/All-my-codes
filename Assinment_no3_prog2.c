 #include<stdio.h>

int DisplayFactor(int iNo)
{
int i=0;
    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(i=2;i<=iNo/2;i++)
    {
        if((iNo % i)==0){
            printf("%d ",i);
        }
        i++;
    }
}
int main()
{  
int iValue1=0;

printf("Enter number \n");
scanf("%d",&iValue1);

 DisplayFactor(iValue1);
    return 0;
}

