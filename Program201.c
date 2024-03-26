#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct NODE *PNODE ;
typedef struct NODE **PPNODE ;

void InsertFirst(PNODE Head,PNODE tail,int no)
{
    PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

   newn ->data=no;
   newn->next=NULL;
   newn->prev=NULL;

   if ((*Head==NULL)&&(*tail==NULL))
   {
     *Head =newn;
     *tail =newn; 
   }
   else
   {
      newn->next=*Head;
      (*Head)->prev=newn;  
      *Head=newn;
   }
   (*tail)->next = *Head;
   (*Head)->prev =*tail;
}
void InsertLast(PNODE Head,PNODE tail,int no)
{
    PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

   newn ->data=no;
   newn->next=NULL;
   newn->prev=NULL;

   if ((*Head==NULL)&&(*tail==NULL))
   {
     *Head =newn;
     *tail =newn; 
   }
   else
   {
     newn->prev=*tail;    
     (*tail)->next=newn;
     *tail=newn;
   }
   (*tail)->next = *Head;
   (*Head)->prev =*tail;
}
void InsertAtPos(PNODE Head,PNODE tail,int no,int ipos)
{
   int size=0,i=0;
   size=Count(*Head,*tail);

   if (ipos<1 || ipos>size+1)
   {
     printf("Invalid position");
        return;
   }
   if (ipos==1)
   {
     InsertFirst(Head,tail,no);
   }
   else if (ipos==size+1)
    {
     InsertLast(Head,tail, no);
   }
   else
   {
     newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        for ( i = 1; i < ipos-1; i++)
        {
            temp=temp->next;
        }
         newn->next=temp->next;
        temp->next->prev->newn;
        temp->next=newn;
        newn->prev=temp;
   }
}
void DeleteFirst(PNODE Head,PNODE tail)
{
    if ((*Head==NULL)&&(*tail==NUll))
    {
        return;
    }
    else if (*Head==*tail)
    {
        free(*Head);
        *Head=NULL;
        *tail=NULL;
    }
    else
    { 
        (*Head)=(*Head)->next;
        free((*tail->next));
        (*Head)->prev=*tail;
        (*tail)->next=*Head;
    }
}
void DeleteLast(PNODE Head,PNODE tail)
{
     if ((*Head==NULL)&&(*tail==NUll))
    {
        return;
    }
    else if (*Head==*tail)
    {
        free(*Head);
        *Head=NULL;
        *tail=NULL;
    }
    else
    { 
        (*tail)=(*tail)->next;
        free((*tail->next));
        (*Head)->prev=*tail;
        (*tail)->next=*Head;
    }
}
void DeleteAtPos(PNODE Head,PNODE tail,int ipos)
{
    int size=0,i=0;
   size=Count(*Head,*tail);

   if (ipos<1 || ipos>size)
   {
     printf("Invalid position");
        return;
   }
   if (ipos==1)
   {
    DeleteFirst(Head,tail);
   }
   else if (ipos==size)
    {
    DeleteLast(Head,tail);
   }
   else
   {
        for ( i = 1; i < ipos-1; i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next-next;
        free(temp->next->prev);
        temp->next->prev=temp;
   }
}
void Display(PNODE Head,PNODE tail)
{
    if (Head !=NULL && tail!= NULL)
    {
        do {
        printf("|%d| <=>",Head->data);
        Head=Head ->next;
        }while (Head!=tail->next)
    }
}
int Count(PNODE Head,PNODE tail)
{
    iCnt=0;

     if (Head !=NULL && tail!= NULL)
    {
        do {
            iCnt++;
        Head=Head ->next;
        }while (Head!=tail->next)
    }
    return iCnt;
}
int main ()
{
  PNODE first =NULL;
  PNODE last = NUll;
  int iRet=0;

     InsertFirst(&first,&last,51);
     InsertFirst(&first,&last,21);
     InsertFirst(&first,&last,11);

     InsertLast(&first,&last,101);
     InsertLast(&first,&last,111);
     InsertLast(&first,&last,121);

     Display(first,last);
     iRet=Cout(first,last);
     printf("\nNumber of nodes are:%d\n",iRet);
    return 0;

    DeleteFirst(&first,&last);
     Display(first,last);
     iRet=Cout(first,last);
     printf("\nNumber of nodes are:%d\n",iRet);

    DeleteLast(&first,&last);
     Display(first,last);
     iRet=Cout(first,last);
     printf("\nNumber of nodes are:%d\n",iRet);

     InsertAtPos(&first,&last, 105,5);
    Display(first,last);
     iRet=Cout(first,last);
     printf("\nNumber of nodes are:%d\n",iRet);

     DeleteAtPos(&first,&last,5);
    Display(first,last);
     iRet=Cout(first,last);
     printf("\nNumber of nodes are:%d\n",iRet);


    return 0;

}