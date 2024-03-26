#include<stdio.h>

int DisplayI()
{
    int i=1;

    while ( i<=4)
    {
        printf("Jay Ganesh...\n");
        i++;
    }
}

int DisplayR()
{
    static int i=1;

    if( i<=4)
    {
        printf("Jay Ganesh...\n");
        i++;
        DisplayR();
    }
}
int main()
{
    DisplayR();

    return 0;
}