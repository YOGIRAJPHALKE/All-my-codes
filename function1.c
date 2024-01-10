#include<stdio.h>

//function defination
void display()
{
    printf("Inside void function...\n");
}

int main()
{
    printf("Inside main function...\n");

    display();  // function call

    return 0;
}