#include <stdio.h>
int main()
{
    float arr[] = {10.3, 43.4, 45.34, 234.45};
    float *p = NULL;
    float *q = NULL;

    p = arr;
    q = &(arr[3]);

    printf("%f \n", p);
    printf("%f \n", q);
    printf("%f \n", *q);
    printf("%f \n", *p);
    printf("%f \n", *(p+2));
    printf("%f \n", *(p+1));
    printf("%f \n", p[1]);
    printf("%f \n", *(2+arr));
    printf("%f \n", 0[arr]);
    printf("%f \n", q-p);
    printf("%f \n", *(q-2));

    //    int arr[]={10,20,30,40,50};
    //    int *p=arr;

    //    printf("%d \n",sizeof(arr));

    //   printf("%d \n",sizeof(arr[0]));

    //    printf("%d \n",sizeof(p));
    //    printf("%d \n",sizeof(*p));

    return 0;
}