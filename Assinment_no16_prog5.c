#include <stdio.h>
#include <stdlib.h>

void DigitSum(int Arr[], int iSize)
{
    int i = 0, iDigit = 0, iSum = 0;

    for (i = 0; i < iSize; i++)

    {
        iSum = 0;
        while (Arr[i] != 0)
        {
            iDigit = Arr[i] % 10;
            iSum = iSum + iDigit;
            Arr[i] = Arr[i] / 10;
        }
        printf("%d \t", iSum);
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *P = NULL;

    printf("Enter the number of elements you want to enter : ");
    scanf("%d", &iLength);

    P = (int *)malloc(iLength * (sizeof(int)));

    if(P==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\n Enter %d number :", iCnt + 1);
        scanf("%d", &P[iCnt]);
    }

    DigitSum(P, iLength);
    free(P);

    return 0;
}

// gcc Assinment_no16_prog5.c -o myexe
