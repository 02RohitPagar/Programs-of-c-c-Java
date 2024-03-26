#include<stdio.h>

int main()
{
   int Arr[5] = {10,20,30,40,50};
   
   printf("base address of array:%d\n",Arr);
   printf("First element is:%d\n",&(Arr[0]));
   printf("First element is :%d\n",Arr[0]);
   printf ("size of whole Array :%d\n",sizeof(Arr));
   printf("size of second element of array:%d\n",(Arr[1]));

    return 0;
}