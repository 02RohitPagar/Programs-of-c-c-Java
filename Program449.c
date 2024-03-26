#include<stdio.h>

int DisplayDigitsR(int iNo)
{
    int iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayDigitsR(iValue);

    return 0;
}