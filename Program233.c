#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void insertfirst(PPNODE Head ,int No)
{
  PNODE newn =(PNODE)malloc(sizeof(NODE));

  newn->data=No;
  newn->next =NULL;

  if (*Head==NULL)//LL is empty
  {
    *Head =newn;
  }
  else
  {
    newn->next =*Head;
    *Head=newn;
  }
}


void Display(PNODE Head)
{
    printf("Contents of linklist :\n");

    while (Head !=NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}
int frequency(PNODE Head,int no)
{
  int iCnt=0;

   while (Head !=NULL)
   {
    if ((Head->data)==no)
    {
         iCnt++;
    }
    
   }
  return iCnt;
}
int main()
{
   PNODE first=NULL;
   int iRet=0;

   insertfirst(&first,111);
   insertfirst(&first,100);
   insertfirst(&first,51);
   insertfirst(&first,20);
   insertfirst(&first,11);
   insertfirst(&first,11);

  Display(first);

  iRet=frequency(first,11);
  printf(" Frequency is :%d",iRet);

  return 0;
}