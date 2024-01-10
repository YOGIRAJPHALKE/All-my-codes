#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL check(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    BOOL bAns = FALSE;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] ==iNo)
        {
            bAns = TRUE;
            break;
        }
    }
    return bAns;
}

int main()
{
    int iLength = 0, iCnt = 0,iValue=0;
    int *P = NULL;
    BOOL bRet = FALSE;

    printf("Enter the elements : \n");
    scanf("%d", &iLength);

    printf("Enter number : \n");
    scanf("%d", &iValue);

    P = (int *)malloc(iLength * sizeof(int));

    if (P == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\n Enter %d Element : ", iCnt + 1);
        scanf("%d", &P[iCnt]);
    }
    bRet = check(P, iLength,iValue);
    if (bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number in not present");
    }
    free(P);

    return 0;
}

//gcc Assinment_no15_prog1.c -o myexe