#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ( Arr[iCnt]>99 && Arr[iCnt]<1000)
        {
           printf("%d \t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

     Digits(P, iSize);

    free(P);

    return 0;
}

// gcc Assinment_no16_prog4.c -o myexe