#include <stdio.h>
int main()
{
    int x = 11;
    printf("%d \n",x);
    const int y=11;
printf("%d \n",y);
x++;  // allowed
x--;  // allowed
x=21;   // allowed
printf("%d",x);
// y++;   // not allowed
// y=21;   // not allowed
// y--;      // not allowed

    return 0;
}