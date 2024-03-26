#include<stdio.h>

int FactorsR(int iNo)
{
    int i=1;

    while( i<=(iNo/2))
    {
      if ((iNo%2)==0)
      {
         printf("%d\n",i);
      } 
      i++;
      FactorsR(iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    FactorsR(iValue);

    return 0;
}