#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;    //#
};
typedef struct NODE NODE;
typedef struct NODE* PNODE;
typedef struct NODE ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
   
}
void InsertLast(PPNODE Head,int no)
{
    
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

}
int Count(PNODE head)
{
   return 0;
}
int main()
{
   PNODE First =NULL;

    return 0;
}