//* * * * * * * * * *
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t",iCnt);
    }

}
int main()
{
  int iValue=0;

  printf("Enter the Value that you want to display * on screen\n");
  scanf("%d",&iValue);

  Display(iValue);

    return 0;
}