#include<stdio.h>

void fun_Value(int No)
{
    No++;
}
void fun_Address(int *prt)
{
    (*ptr)++;
}
void fun_Reference(int &ref)
{
    ref++;
}

int main()
{
  int i=10,j=10,k=10;
  
   fun_Value(i);
   fun_Address(&j);
   fun_Reference(k);

  printf("Call by value:%d\n",i);
  printf("Call by Address:%d\n",j);
  printf("Call by Reference:%d\n",k);
  return 0;   
}