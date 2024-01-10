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
void Reverse(PNODE Head)
{
    int temp = 0;
    int Rev = 0, iNo = 0;
    while (Head != NULL)
    {
        temp = Head->Data;
        while (temp != 0)
        {
            iNo = temp % 10;
            temp = temp / 10;
            Rev = iNo + Rev * 10;
        }
        printf("| %d |->", Rev);
        Head = Head->Next;
        Rev = 0, iNo = 0;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Reverse(First);

    return 0;
}
// gcc Assinment_no31_prog1.c -o myexe