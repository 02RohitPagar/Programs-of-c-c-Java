#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void push(PNODE Head,int no)
{
  PNODE newn = NULL;

  newn=(PNODE)malloc(sizeof(NODE));

  newn->data=no;
  newn->next=NULL;

  if (*Head==NULL)
  {
    *Head=newn;
  }
  else
  {
    newn->next=*Head;
    *Head=newn;
  }
}
int Pop(PNODE Head)
{
   int Value=0;
   PNODE temp =*Head;

   if (*Head==NULL)
   {
    printf ("Stack is empty...");
   
   }
   else
   {
    Value=(*Head).data;
    *Head =(*Head).next;
    free(temp);
   }
    return Value;
}
void Display(PNODE Head)
{
   printf("Elements of stack are:\n");

   while (Head!=NULL)
   { 
    printf("|%d|\n",Head->data);
    Head=Head->next;
   }
}
int main()
{
   PNODE first =NULL;
  int iRet=0;

   push(&first,101);
   push(&first,51);
   push(&first,21);
   push(&first,11);

   Display(first);

   iRet=Pop(&first);
   printf("Popped elements is:%d\n",iRet);

    iRet=Pop(&first);
   printf("Popped elements is:%d\n",iRet);

     iRet=Pop(&first);
   printf("Popped elements is:%d\n",iRet);

    iRet=Pop(&first);
   printf("Popped elements is:%d\n",iRet);

    iRet=Pop(&first);
   printf("Popped elements is:%d\n",iRet);

    return 0;
}