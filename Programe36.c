#include<stdio.h>
#include<stdbool.h>

void Displayfactor(int iNo)
{
 int iCnt =0;
 printf("Factors of %d are:\n",iNo);

 for(iCnt =1;iCnt<iNo;iCnt++)
 {
    if((iNo % iCnt)==0)
    {
        printf("%d\n",iCnt);
    }
 }
}

int main()
{
  int iValue=0;
  printf("Enter the number:\n");
  scanf("%d",&iValue);

 Displayfactor(iValue);

    return 0;
}