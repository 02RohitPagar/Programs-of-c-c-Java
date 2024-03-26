#include<stdio.h>

int Factors(int iNo)
{
    int i=1;

    for( i=1;i<=(iNo/2);i++)
    {
      if ((iNo%2)==0)
      {
         printf("%d\n",i);
      } 
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Factors(iValue);

    return 0;
}