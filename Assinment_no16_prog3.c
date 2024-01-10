#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iTempSmall = Arr[0];
    int iTempBig = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iTempSmall > Arr[iCnt])
        {
            iTempSmall = Arr[iCnt];
        }
        if (iTempBig < Arr[iCnt])
        {
            iTempBig = Arr[iCnt];
        }
    }
    return iTempBig-iTempSmall;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *P = NULL;

    printf("Enter number : \n");
    scanf("%d", &iSize);

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

    iRet = Difference(P, iSize);

    printf("Difference is : %d ", iRet);

    free(P);

    return 0;
}

// gcc Assinment_no16_prog3.c -o myexe