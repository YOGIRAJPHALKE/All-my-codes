#include <stdio.h>

struct Demo
{
    int no;
    
    struct Demo *ptr;
} dobj;
int main()
{   
    struct Demo obj1,obj2,obj3;
    
    obj1.no=11;
    obj2.no=21;
    obj3.no=51;

    obj1.ptr =&obj2;
    obj2.ptr = &obj3;
    obj3.ptr=NULL;


printf("%d \n",obj1.no);
printf("%d \n",obj1.ptr->no);
printf("%d \n",obj1.ptr->ptr->no);
    return 0;
}