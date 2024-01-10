#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *P = NULL;

    printf("Enter number of element : \n");
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

    iRet = CountEven(P, iSize);
    printf("Result is : %d \n", iRet);

    free(P);

    return 0;
}

// gcc Assinment_no14_prog1.c -o myexe