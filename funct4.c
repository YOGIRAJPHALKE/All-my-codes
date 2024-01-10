#include<stdio.h>

int add(int no1 ,int no2){
    return no1+no2;
}


int sub(int no1 ,int no2){
    return no1-no2;
}


int mul(int no1 ,int no2){
    return no1*no2;
}



int main()
{
  int a=20;
  int b=4;

  int c=add(a,b);
 int d=sub(a,b);
 int e=mul(a,b);

  printf("addition is: %d \n substraction is: %d \n multiplication is : %d ",c,d,e);

  int ans;
  ans=add(a,b);
  printf("\n addition is: %d ",ans);
  ans=sub(a,b);
  printf("\n substraction is: %d ",ans);
    return 0;
}