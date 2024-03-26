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

void DisplayR(PNODE Head)
{
    if(Head !=NULL)
    {
        printf("|%d|->",Head->data);
        DisplayR(Head->next);
    }
}
int Count(PNODE Head)
{
    int iCnt=0;

    while (Head !=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}

int main()
{
   PNODE first=NULL;
   int iRet=0;

   insertfirst(&first,111);
   insertfirst(&first,101);
   insertfirst(&first,51);
   insertfirst(&first,21);
   insertfirst(&first,11);

  DisplayR(first);
  iRet=Count(first);
  printf("\nNumber of nodes are :%d\n",iRet);
  return 0;
}