#include<stdio.h>

int Factorial(int iNo)
{
    static int iCnt=0;
    static int iFacts=0;

    if(iCnt<=iNo)
    {
      iFacts=iFacts*iCnt;
      iCnt++;
      Factorial(iNo);
    }
    return iFacts;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("factorial of number is:%d",iRet);

    return 0;
}