#include<stdio.h>

int main() 
{
    int standard = 0;

    printf("primary school portal\n");
    printf("enter your devition: \n");
    scanf ("%d",&standard);

    if(standard == 1)
    {
        printf("Your exam is at 1 PM\n");
    }
    else if (standard == 2)
    {
     printf("Your exam is at 2 PM\n");
    }

  else if (standard == 3)
    {
     printf("Your exam is at 3 PM\n");
    }
else if (standard == 4)
    {
     printf("Your exam is at 4 PM\n");
    }

    else
    {
        printf(invalid divition\n);
    }
 return 0;
}