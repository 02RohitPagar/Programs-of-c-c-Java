#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt=0;
    int iFacts=0;

    while (iCnt<=iNo)
    {
      iFacts=iFacts*iCnt;
      iCnt++;
    }
    return iFacts;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Summation is:%d",iRet);

    return 0;
}