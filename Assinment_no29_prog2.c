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

int SerchLastOcc(PNODE Head, int iNo)
{
    int iCnt = 0;
    int Occ = 0;

    while (Head != NULL)
    {
        iCnt++;
        if (Head->Data == iNo)
        {
            Occ = iCnt;
        }
        Head = Head->Next;
    }

    return Occ;
}
int main()
{
    PNODE First = NULL;
    int a = 0, iRet = 0;

    printf("enter the number you want to Find : \n");
    scanf("%d", &a);
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    iRet = SerchLastOcc(First, a);
    printf("The Last occurrence of the %d in the linked list is : %d\n", a, iRet);

    return 0;
}

// gcc Assinment_no29_prog2.c -o myexe
