#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while (Head != NULL)
    {
        printf("| %d | ->", Head->Data);
        Head = Head->Next;
    }

    printf("NULL \n");
}

void DisplayPrime(PNODE Head)
{
    int iNo = 0;
    int iTemp=0;
    int iCnt=0;

    while (Head != NULL)
    {
         iTemp=Head->Data;
        for ( iNo = 2; iNo <= iTemp/2; iNo++)
        {
            if (iTemp % iNo == 0)
            {
                iCnt++;
            }
        }
        if(iCnt==0)
        {
            printf("%d ",iTemp);
        }
        iCnt=0;
        Head = Head->Next;
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 62);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    DisplayPrime(First);

    return 0;
}

// gcc Assinment_no30_prog2.c -o myexe
