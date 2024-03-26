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
void EvenDisplay(PNODE Head)
{
   printf("even elements are:\n");

   while (Head !=NULL)
   {
    if((Head->data)%2==0)
    printf("%d\n",Head->data);
   }
   Head=Head->next;
}
int main()
{
   PNODE first=NULL;

   insertfirst(&first,111);
   insertfirst(&first,100);
   insertfirst(&first,51);
   insertfirst(&first,20);
   insertfirst(&first,11);
  

  Display(first);

  return 0;
}