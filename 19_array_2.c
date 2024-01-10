
#include <stdio.h>
int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};
     
     printf("%d \n",Arr);
      printf("%d \n",&(Arr[0]));

  printf("%d \n",&(Arr[1]));

      printf("%d \n",Arr[0]);
       printf("%d \n",sizeof(Arr));
        printf("%d \n",sizeof(Arr[1]));

    return 0;
}