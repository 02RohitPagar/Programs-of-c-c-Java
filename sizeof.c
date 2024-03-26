#include<stdio.h>

int main()
{
 char ch ='A';
 int i =21;
 float f = 12.31f;
 double d =89.90;

printf("size of chracter is : %d bytes\n,sizeof (ch)");
printf("size of int is : %d bytes\n,sizeof (i)");
printf("size of float is : %d bytes\n,sizeof (f)");
printf("size of double is : %d bytes\n,sizeof (d)");

printf("base address of character is : %d,&ch");
printf("base address of int is : %d,&i");
printf("base address of float is : %d,&f");
printf("base address of double is : %d,&d");


    return 0;
}