#include <stdio.h>

void Fun_Value(int No)
{
    No++;
}
void Fun_Address(int *ptr)
{ (*ptr)++; }
void Fun_Reference(int &ref)
{ ref++; }

int main()
{
    int i=10,j=10,k=10;

    Fun_Value(i);
    Fun_Address(&j);
    Fun_Reference(k);

    printf("Callby Value : i %d\n",i);
        printf("Callby Value : j %d\n",j);
    printf("Callby Value : k %d\n",k);


    return 0;
}

// gcc Function.c -o myexe
