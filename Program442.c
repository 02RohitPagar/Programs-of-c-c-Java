#include<stdio.h>

int DisplayR(int iNo)
{
    static int i=1;

    if( i<=iNo)
    {
        printf("%d\n",i);
        i++;
        DisplayR(iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",iValue);

    DisplayR(iValue);

    return 0;
}