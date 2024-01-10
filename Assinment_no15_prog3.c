#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iAns = -1;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % iNo == 0)
        {
            iAns = iCnt;
        }
    }
    return iAns;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *P = NULL;

    printf("Enter number of element : \n");
    scanf("%d", &iSize);

    printf("Enter number : \n");
    scanf("%d", &iValue);

    P = (int *)malloc(iSize * sizeof(int));

    if (P == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d  element : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n Enter element %d : ", iCnt + 1);
        scanf("%d", &P[iCnt]);
    }

    iRet = LastOcc(P, iSize, iValue);
    if (iRet == -1)
    {
        printf("There is no such a number");
    }
    else
    {
        printf("First occarnc of number is %d ", iRet);
    }

    free(P);

    return 0;
}

// gcc Assinment_no15_prog3.c -o myexe