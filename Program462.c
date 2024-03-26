#include<stdio.h>

int DisplayR(int Arr[],int isize)
{
    static int iCnt=0;

    if(iCnt<isize)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
        DisplayR(Arr,isize);
    }
}
int main()
{
    int Arr[5]={10,20,30,40,50};

    DisplayR(Arr, 5 );

    return 0;
}