#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iTemp = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iTemp > Arr[iCnt])
        {
            iTemp = Arr[iCnt];
        }
    }
    return iTemp;
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

    iRet = Minimum(P, iSize);

    printf("Smallest number is : %d ", iRet);

    free(P);

    return 0;
}

// gcc Assinment_no16_prog2.c -o myexe