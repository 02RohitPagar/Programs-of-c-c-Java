#include<stdio.h>

int SumDigitsR(int iNo)
{
    int iDigit=0;
    static int isum=0;

    if (iNo!=0)
    {
        iDigit=iNo%10;
        isum=isum+iDigit;
        iNo=iNo/10;
        SumDigitsR( iNo);
    }

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=SumDigitsR(iValue);
    printf("Summation is:%d",iRet);

    return 0;
}