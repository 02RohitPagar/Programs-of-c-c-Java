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
void insertlast(PPNODE Head,int No)
{
 //Temporory pointer for LL traverel
 PNODE Temp=*Head;
 
 PNODE newn =(PNODE)malloc(sizeof(NODE));

  newn->data=No;
  newn->next =NULL;

  if (*Head==NULL)//LL is empty
  {
    *Head =newn;
  }
  else
  {
    //Travel the LL last Node
    while (Temp->next!=NULL)
    {
        Temp=Temp->next;
    }
    //Add the address of new node at the end of the last node
    Temp->next =newn;
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
void Deletefirst(PPNODE Head)
{
    PNODE temp=*Head;

  if (*Head==NULL)
  {
    return;
  }
  else if ((*Head)->next==NULL)
  {
    free(*Head);
    *Head=NULL;
  }
  else
  {
    *Head =(*Head)->next;
    free(temp);
  }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
    if (*Head==NULL)
  {
    return;
  }
  else if ((*Head)->next==NULL)
  {
    free(*Head);
    *Head=NULL;
  }
  else
  {
    while (temp->next->next!=NULL)
    {
       temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
  }
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

  Display(first);
  iRet=Count(first);
  printf("Number of nodes are :%d\n",iRet);

  insertlast(&first,121);
  insertlast(&first,151);

  Display(first);
  iRet=Count(first);
  printf("Number of nodes are :%d\n",iRet);

 Deletefirst(&first);
 Display(first);
  iRet=Count(first);
  printf("Number of nodes are :%d\n",iRet);

DeleteLast(&first);
 Display(first);
  iRet=Count(first);
  printf("Number of nodes are :%d\n",iRet);

  return 0;
}