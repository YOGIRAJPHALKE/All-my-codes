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

int AdditionEven(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        if (((Head->Data) % 2) == 0)
        {
            iCnt = iCnt + Head->Data;
        }
        Head = Head->Next;
    }
    return iCnt;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 50);
    InsertFirst(&First, 41);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 11);

    Display(First);

    iRet = AdditionEven(First);
    printf("Addition of all even numbers is : %d", iRet);

    return 0;
}

// gcc Assinment_no30_prog3.c -o myexe
