#include<stdio.h>

int EvenCountR(int Arr[],int isize)
{
    static int iCnt=0;
    static int iEven=0;

    if(iCnt<isize)
    {
        if ((Arr[iCnt]%2)==0)
        {
            iEven++;
        }
        iCnt++;
        EvenCountR(Arr,isize);
    }
    return iEven;
}
int main()
{
    int Arr[5]={10,20,30,40,50};
    int iRet=0;

    iRet=EvenCountR(Arr, 5 );
    printf("Even numbers are:%d\n",iRet);

    return 0;
}