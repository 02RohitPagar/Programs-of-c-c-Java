#include<stdio.h>
#include<stdlib.h>

int Oddcount(int Arr[],int iSize)
{
    int iCnt=0;

    printf("\n Even Elements of the array are:\n");

   for (iCnt = 0; iCnt < iSize; iCnt++)
   {
      if ((Arr[iCnt]%2)!=0)
      {
        printf("%d\t",Arr[iCnt]);
      }
   }
   printf("\n");
}
int main()
{
  int iCount=0,iCnt=0;
  int *ptr=NULL;

  printf("Enter the number of elements that you want to enter:\n");
  scanf("%d",&iCount);
 
  ptr=(int*) malloc(iCount*sizeof(int));
    
    printf("Dynamic memory gets allocate succesfully for %d elements\n",iCount);

    printf("Enter the %d value:\n",iCount);
    printf("Enter the value:\n");
         for (iCnt = 0; iCnt < iCount; iCnt++)
         {
            printf("\n Enter the element no %d:",iCnt+1);
            scanf("%d",&ptr[iCnt]);
         }
    
    Oddcount(ptr,iCount);

    free(ptr);

    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;

}