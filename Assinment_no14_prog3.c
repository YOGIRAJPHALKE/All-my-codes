#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL check(int Arr[], int iSize)
{
    int iCnt = 0;
    BOOL bAns = FALSE;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            bAns = TRUE;
            break;
        }
    }
    return bAns;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *P = NULL;
    BOOL bRet = FALSE;

    printf("Enter the elements : \n");
    scanf("%d", &iLength);

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
    bRet = check(P, iLength);
    if (bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 in not present");
    }
    free(P);

    return 0;
}

//gcc Assinment_no14_prog3.c -o myexe