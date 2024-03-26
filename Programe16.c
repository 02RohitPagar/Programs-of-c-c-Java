#include<stdio.h>
 
 void DisplayExamtime(int iStandard)
{
  switch(iStandard)
  {
    case 1:
    printf
    ("Your exam is at 8 AM\n");
    break;

    case 2:
    printf("Your exam is at 9 AM\n");
    break;

    case 3:
    printf("Your exam is at 10 AM\n");
    break;

    case 4:
    printf("Your exam is at 11 AM\n");
    break;

    case 5:
    printf("Your exam is at 12 NOON\n");
   break;

   default:
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