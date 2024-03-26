import java.util.*;

class node
{
    public int data;
    public int next;

    public node(int no)
    {
        data=no;
        next=null;
    }
}

class SinglyLL
{
    private node first;
    private int count;

    public SinglyLL()
    {
        first =null;
        count =0;
    }
    public void Insertfirst(int no)
    {
        node newn=new node(no);

        if (first==null) //LL is empty
        {
          first=newn;  
        }
        else
        {
            newn.next=first;
            first=newn;
        }
        count++;

    }
    public void InsertLast(int no){}
    public void InsertAtPos(int no,int ipos){}
    public void Deletefirst(){}
    public void DeleteLast(){}
    public void DeleteatPos(int ipos){}
    public void Display(){}
    public int Count(){return count;}
}
class Program410
{
    public static void main(String Arg[])
    {
        SinglyLL obj=new SinglyLL();

        obj.Insertfirst(51);
        obj.Insertfirst(21);
        obj.Insertfirst(11);

        obj.Display();
    }
}