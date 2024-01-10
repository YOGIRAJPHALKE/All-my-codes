#include <stdio.h>

void Display()
{
    register int no = 11;
    register int i;
    

    printf("Value of no : %d \n", no);
    printf("Value of i : %d \n", i);
}
int main()
{
    Display();
    return 0;
}