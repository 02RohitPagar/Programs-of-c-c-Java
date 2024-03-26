#include<stdio.h>
 
 void DisplayExamtime(int iStandard)
{
  if (iStandard ==1)
  {
    ("Your exam is at 8 AM\n");
  }
  else if (iStandard ==2)
  {
    printf("Your exam is at 9 AM\n");
  }
  else if (iStandard ==3)
  {
    printf("Your exam is at 10 AM\n");
  }
  else if (iStandard ==4)
  {
    printf("Your exam is at 11 AM\n");
  }
  else if (iStandard ==5)
  {
    printf("Your exam is at 12 NOON\n");
  }
  else
  {
    printf("Wrong input..\n");
  }
}
  
int main()
{
  int iValue = 0;

  printf("Enter your standard\n");
  scanf("%d",&iValue);

  DisplayExamtime(iValue);

    return 0;
}