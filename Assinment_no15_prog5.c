#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength )
{
    int iCnt = 0;
    int iAns = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iAns = 1;
        }
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iAns = iAns*Arr[iCnt];
        }
    }
    return iAns;
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

    iRet = Product(P, iSize);
    
    printf("Product is : %d ", iRet);

    free(P);

    return 0;
}

// gcc Assinment_no15_prog3.c -o myexe