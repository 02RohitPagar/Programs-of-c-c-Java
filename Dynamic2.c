#include<stdio.h>
#include<stdlib.h>


int main()
{
  int Arr [5];
  float fValue;
  double Brr[4];

  int iSize=0;
  int *ptr =NULL;

  printf("Enter size of array:\n");
  scanf("%d",&iSize);

  ptr =  (int*)calloc(iSize , sizeof(int));
    
  prt[0]=10;
  prt[1]=11;
  ptr[2]=12;

  free(ptr);
    
    return 0;
}