#include<stdio.h>

int addition(int no1,int no2)
{
 int sum=0;
sum=no1+no2;
printf("h...\n");
// return no1+no2;
return sum;
}

int main()
{
   int val1=10;
   int val2=11;
   int ans=0;
    
ans=addition(val1,val2);

printf("addition is : %d",ans);
    return 0;
}

