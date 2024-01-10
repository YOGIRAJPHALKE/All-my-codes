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

int Addition(PNODE Head)
{
    int Temp = 0;

    Temp = Head->Data;

    while (Head != NULL)
    {
        if ((Head->Data) < Temp)
        {
            Temp = Head->Data;
        }
        Head = Head->Next;
    }

    return Temp;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Addition(First);
    printf("Smallest number of the linked list is : %d\n", iRet);

    return 0;
}

// gcc Assinment_no29_prog5.c -o myexe
