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

class singlyLL
{
    private node first;
    private int count;

    public SinglyLL()
    {
        first =null;
        count =0;
    }
    public void Insertfirst(int no){}
    public void InsertLast(int no){}
    public void InsertAtPos(int no,int ipos){}
    public void Deletefirst(){}
    public void DeleteLast(){}
    public void DeleteatPos(int ipos){}
    public void Display(){}
    public int Count(){return Count;}
}
class Program408
{
    public static void main(String Arg[])
    {
        SinglyLL obj=new singlyLL();

        obj.Insertfirst(51);
        obj.Insertfirst(21);
        obj.Insertfirst(11);

        obj.Display();
    }
}