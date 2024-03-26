#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iSize)
{
    int iCnt=0;

    printf("Elements of the array are:\n");

   for (iCnt = 0; iCnt <iSizer; iCnt++)
   {
       printf("%d\t",Arr[iCnt]);
   }
}
int main()
{
  int iCount=0,iCnt=0;
  int *ptr=NULL;

  printf("Enter the number of elements that you want to enter:\n");
  scanf("%d",&iCount);
 
  ptr=(int*) malloc(iCount*sizeof(int));
    
    printf("Enter the value:\n");
         for (iCnt = 0; iCnt < iCount; iCnt++)
         {
            Scanf("%d",&ptr[iCnt]);
         }
    
    Display(iCount,ptr);

    free(prt);
    return 0;

}