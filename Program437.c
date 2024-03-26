#include<stdio.h>

int DisplayR()
{
    static int i=1;

    if( i<=5)
    {
        printf("*\t");
        i++;
        DisplayR();
    }
}
int main()
{
    DisplayR();

    return 0;
}