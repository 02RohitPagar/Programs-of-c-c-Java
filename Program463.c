#include<stdio.h>

int SumR(int Arr[],int isize)
{
    static int iSum=0;
    static int iCnt=0;

    if(iCnt<isize)
    {
        iSum=iSum+Arr[iCnt];
        iCnt++;
        SumR(Arr,isize);
    }
    return iSum;
}
int main()
{
    int Arr[5]={10,20,30,40,50};
    int iRet=0;

    iRet=SumR(Arr, 5 );
    printf("Summation is:%d\n",iRet);

    return 0;
}