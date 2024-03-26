#include<stdio.h>

int SumFactorsR(int iNo)
{
    int i=1;
    int isum=0;

    while( i<=(iNo/2))
    {
      if ((iNo%2)==0)
      {
        isum=isum+i;
      } 
      i++;
    }
    return isum;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=SumFactorsR(iValue);
     printf("Summation is:%d",iRet);

    return 0;
}