// Customized database management system

class node
{
    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(int A,String B,String C,int D)
    {
        Rno =A;
        Name =B;
        City = C;
        Marks = D;
        next = null;
    }

}
class DBMS
{
    private node first;

    public DBMS()
    {
        first=null;
        System.out.println("DBMS initialised successfully...");
        System.out.println("Student table gets inserted successfully...");
    }

    //Insert last
    public void InsertIntoTable(int Rno,String Name,String City,int Marks)
    {
        node newn=new node(Rno,Name,City,Marks);

        if (first==null) 
        {
            first=newn;    
        }
        else
        {
            node temp=first;
        
        while (temp.next!=null) 
        {
            temp=temp.next;     
        }
        temp.next=newn;
        }
        System.out.println("One record gets inserted successfully...");
    }

}

class Program418
{
    public static void main(String arg[]) 
    {
        DBMS obj=new DBMS();

        obj.InsertIntoTable(1,"Amit","Pune",89);
        obj.InsertIntoTable(2,"Pooja","Mumbai",95);
        obj.InsertIntoTable(3,"Rahul","Satara",80);
        obj.InsertIntoTable(4,"Naha","Pune",78);

    }
    
}