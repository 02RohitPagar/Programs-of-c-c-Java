#include<stdio.h>

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