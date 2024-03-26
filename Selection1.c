#include<stdio.h>

int main()
{
 int no = 0;
 int Ans = 0;

 if(Ans == 0)
{
    printf("Number is even\n");
}
else 
{
    printf("number is odd\n");
}

 printf ("Enter number : \n");
 scanf("%d",&no);

 Ans = no % 2;


    return 0;
}