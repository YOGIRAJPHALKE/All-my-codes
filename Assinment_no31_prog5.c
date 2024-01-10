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
void DisplayLarge(PNODE Head)
{
    int temp = 0, Small = 0;
    int Mul = 1, iNo = 0;
    while (Head != NULL)
    {
        temp = Head->Data;
        while (temp != 0)
        {
            iNo = temp % 10;
            temp = temp / 10;
            if (iNo > Small)
            {
                Small = iNo;
            }
        }
        printf(" %d ", Small);
        Head = Head->Next;
        iNo = 0;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    DisplayLarge(First);

    return 0;
}
// gcc Assinment_no31_prog5.c -o myexe