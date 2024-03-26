#include<stdio.h>

void fun()
{
 auto int i = 10;
 i++;
 printf("value of i:%d\n",i);
}
int main()
{
 int no =51;

 fun();
 fun();
 fun();
    return 0;
}