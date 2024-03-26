#include<stdio.h>

int SumFactorsR(int iNo)
{
    static int i=1;
    static int isum=0;

    if( i<=(iNo/2))
    {
      if ((iNo%2)==0)
      {
        isum=isum+i;
      } 
      i++;
    SumFactorsR(iNo);
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