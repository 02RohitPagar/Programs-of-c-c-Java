#include<stdio.h>

void DisplayClass(float fMarks)
{
  if ((fMarks < 0.00) || (fMarks > 100.00))
  {
    printf("Your marks is invalid\n");
  }
  if((fMarks >= 0.0) && (fMarks<35.00 ))
  {
    printf("You are fail..\n");
  }
   else if((fMarks>=35.00) && (fMarks <50.00))
 {
    printf("Your class is second class\n"); 
 }
  else if((fMarks>=50.00) && (fMarks <60.00))
 {
    printf("Your class is second class\n"); 
 }

 else if ((fMarks>=60.00)&&(fMarks <75.00))
 {
    printf("Your class is first class\n"); 
 }

 else if ((fMarks>=75.00)&&(fMarks <=100.00))
 {
     printf("Your class is first class with Distiction\n");  
 }

}


int main()
{
  float fValue  =0.0f;

  printf("Enter your percentage :\n");
  scanf("%d",&fValue);

  DisplayClass(fValue);

    return 0;
}