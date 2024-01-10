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

    printf("NULL \n\n");
}

void SumDigit(PNODE Head)
{
    int iSum=0;
    int iTemp=0;
    int iNo=0;

    while (Head != NULL)
    {
        iTemp=Head->Data;
        while(iTemp!=0)
        {
            iNo=iTemp%10;
            iTemp=iTemp/10;
            iSum=iSum+iNo;
        }
        printf(" %d \t",iSum);
        iSum=0;
        Head = Head->Next;
    }
    
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

    SumDigit(First);

    return 0;
}

// gcc Assinment_no30_prog5.c -o myexe
