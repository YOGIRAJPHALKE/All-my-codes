#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iNo1,int iNo2)
{
    int iCnt = 0;
    

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] >iNo1 && Arr[iCnt]<iNo2)
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue1 = 0,iValue2=0;
    int *P = NULL;

    printf("Enter number of element : \n");
    scanf("%d", &iSize);

    printf("Enter the starting point : \n");
    scanf("%d", &iValue1);
    
    printf("Enter the Ending point : \n");
    scanf("%d", &iValue2);

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

    Range(P, iSize, iValue1,iValue2);

    free(P);

    return 0;
}

// gcc Assinment_no15_prog4.c -o myexe