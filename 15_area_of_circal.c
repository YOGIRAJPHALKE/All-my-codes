#include <stdio.h>

int main()
{
    float radius = 0.0f;
    const float PI = 3.14f;
    float Area = 0.0f;

    printf("enter the radius \n");
    scanf("%f", &radius);

    Area = PI * radius * radius;

     printf("Area of circle is : %f\n",Area);
     
    return 0;
}