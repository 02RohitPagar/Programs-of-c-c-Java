
class FinlizeDemo
{
  public static void main(String arg[])
  {
    Emplpoyee eobj=new Employee("Amit,70000,28,karve Road pune");
   eobj.Display();  
   Emplpoyee eobj2=eobj;
   
    Emplpoyee eobj3=new Employee("sagar,80000,25,prabhat Road pune");

    System.out.println("Hash code of obj is"+obj.hashcode());
    System.out.println("Hash code of obj is"+obj2.hashcode());
    System.out.println("Hash code of obj is"+obj3.hashcode());

    eobj=null;
   System.gc();
}                            
}
class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public strig Address;

    Employee (String str,int amount,int a,string addr)
    {
        this.Name=str;
        this.Salary=amount;
        this.Age=a;
        this.Address=addr;
    }
    protected
    {
        System.out.println("Inside finlize method");
    }

    void Display()
    {
        System.out.println("Employee name:"+this.Name);
        System.out.println("Employee Age:"+this.Age);
        System.out.println("Employee salary:"+this.Salary);
        System.out.println("Employee Address:"+this.address);
    }
}