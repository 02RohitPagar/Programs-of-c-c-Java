#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0;
    int j =0;
    for (i= 1; i<=5; i++)
    {
           for (j = 1; j<=5; j++)
           {
            printf("%d\t",i);
           } 
           printf("\n\n");
    }
}
int main()
{
    int iNo1,iNo2=0;

    printf("Enter number of rows\n");
    scanf("%d",&iNo1);

    printf("Enter number of columns\n");
    scanf("%d",&iNo2);


    Display(iNo1,iNo2);

    return 0;
}