#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL cHKvOWEL(char cVov)
{
    if(cVov=='a' || cVov=='e' ||cVov=='i' ||cVov=='o' ||cVov=='u' ){
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet=FALSE;

    printf("enter char \n");
    scanf("%c",&cValue);

   bRet= cHKvOWEL(cValue);
    if(bRet==TRUE)
{
    printf("It is Vowel");
}
else
{
    printf("It is not Vowel");
}
}