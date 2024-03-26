#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

//typedef struct node NODE;
//typedef struct node* PNODE;
//typedef struct node** PPNODE;

void InsertFirst(PNODE Head,PNODE tail,int no)
{
   PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    if ((*Head==NULL) && (*tail==NULL))  //LL is emty
    {
        *Head =newn;
        *tail =newn;  //#
    }
    else            // LL contains atleast one node
    {
        newn->next=*Head;
        *Head =newn;  //#  
    }
     (*tail)->next = *Head;
}
void InsertLast(PNODE Head,PNODE tail,int no)
{
    PNODE newn =NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    if ((*Head==NULL) && (*tail==NULL))  //LL is emty
    {
        *Head =newn;
        *tail =newn;

        (*tail)->next=*Head;
    }
    else            // LL contains atleast one node
    {
        (*tail)->next=newn;
        *tail=newn;
        (*tail)->next=*Head;
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
        (*tail)->next=*Head;
    }
}
void DeleteLast(PNODE Head,PNODE tail)
{
    PNODE temp=*Head;

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
        while (temp->next!=*tail)
        {
            (*tail)=*Head->next;
            free(*tail);
            *tail=*Head;
            (*tail)->next=*Head;
        }
    }
}

void Display(PNODE Head,PNODE tail)
{
    if ((*Head!=NULL)&&(*tail!=NULL))
    {
        printf("Elements of linkedlist are:\n");
        do
        {
           printf("%d",Head->data);
           Head=Head->next;
        }while (Head!=tail->next);

        printf("Address of first node:");
    }
}
int Count(PNODE Head,PNODE tail)
{
     int iCnt=0;
    if ((*Head!=NULL)&&(*tail!=NULL))
    {
     do
        {
        iCnt++;
        Head=Head->next;
        }while (Head!=tail->next);
    }
    return iCnt;

}
void InsertAtPos(PNODE Head,PNODE tail,int no,int ipos)
{
    int size=0,i=0;
    size =Count(*Head,*tail);
    PNODE newn=NUll;

    if ((ipos<1)||(ipos>size+1))
    {
        printf("Invalid position");
        return;
    }
    if (ipos==1)
    {
        InsertFirst(Head,tail, no)
    }
    else if (ipos==size+1)
    {
        InsertLast(Head,tail,no)
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;

        for ( i = 1; i < ipos; i++)
        {
            temp=temp->next;
        }
         newn->next=temp->next;
        temp->next=newn;
    }
}
void DeleteAtPos(PNODE Head,PNODE tail)
{
    int size=0,i=0;
    size =Count(*Head,*tail);
    PNODE targetednode=NULL;

    if ((ipos<1)||(ipos>size))
    {
        printf("Invalid position");
        return;
    }
    if (ipos==1)
    {
        DeleteLast(Head,tail)
    }
    else if (ipos==size)
    {
        DeleteLast(Head,tail,no)
    }
    else
    {
        for ( i = 1; i < ipos; i++)
        {
            temp=temp->next;
        }
       targetednode=temp->next;
        temp->next=newn;=temp->next->next;
        free(targetednode);
   }
}
int main()
{
 PNODE first = NULL;
 PNODE last = NULL;  //#
 int iRet=0;

  InsertFirst(&first,&last, 51);
  InsertFirst(&first,&last, 21);
  InsertFirst(&first,&last, 101);

  Display(first,last);
  iRet=Count(first,last);
  printf("Number of elements are:");

  InsertLast(&first, &last, 101);
  InsertLast(&first, &last, 111);
  InsertLast(&first, &last, 121);

  Display(first,last);
  iRet=Count(first,last);
  printf("Number of elements are:");

InsertAtPos(&first, &last, 105, 5);
  Display(first,last);
  iRet=Count(first,last);
  printf("Number of elements are:");
  
  DeleteAtPos(&first, &last,5);
  Display(first,last);
  iRet=Count(first,last);
  printf("Number of elements are:");

DeleteFirst(&first,&last);
  Display(first,last);
  iRet=Count(first,last);
  printf("Number of elements are:");

DeleteLast(&first,&last);
  Display(first,last);
  iRet=Count(first,last);
  printf("Number of elements are:");

    return 0;

}