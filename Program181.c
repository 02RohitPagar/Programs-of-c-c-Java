#include<stdio.h>
#include<stdlib.h>

struct NODE
{
    int data;
    struct node *next;
    struct node *prev;    //#
};
typedef struct  NODE NODE;
typedef struct NODE *PNODE;
typedef struct NODE ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
   PNODE newn=NULL;

   newn=(PNODE)malloc(sizeof(NODE));

   newn->data=no;
   newn->next=NULL;
   newn->prev=NULL;  //#

   if (*Head=NULL) //LL is empty
   {
      *Head=newn;
   }
   else
   {
    newn->next=*Head;
    (*Head)->prev=newn;
    *Head=newn;
   }

}
void InsertLast(PPNODE Head,int no)
{
    PNODE newn=NULL;

   newn=(PNODE)malloc(sizeof(NODE));

   newn->data=no;
   newn->next=NULL;
   newn->prev=NULL;  //#

   if (*Head=NULL) //LL is empty
   {
      *Head=newn;
   }
   else
   {
    
   }
}
void InsertAtPos(PPNODE Head,int no,int ipos)
{
    
}
void DeleteFirst(PPNODE Head)
{
    
}
void DeleteLast(PPNODE Head)
{
    
}
void DeleteAtPos(PPNODE Head,int ipos)
{
    
}
void Display(PNODE Head)
{
  printf("Contents of Linkedlist are: \n");

  while (Head!=NULL)
  {
    printf("%d <=>",Head->data);
    Head=Head->next;
  }
  printf("NULL \n");
}
int Count(PNODE Head)
{
    while (Head!=NULL)
  {
    Head=Head->next;
  }

   return 0;
}
int main()
{
   PNODE first =NULL;

   InsertFirst(&first,51);
   InsertFirst(&first, 21);
   InsertFirst(&first, 11);

Display(first);

    return 0;
}