
class FinlizeDemo3
{
  public static void main(String arg[]) 
  {
    try
    {Emplpoyee eobj1=new Employee("Amit,70000,28,karve Road pune");
   
    Emplpoyee eobj2=(Emploee)eobj1.clone();
    eobj1.Display();
    eobj2.Display();
    System.out.println(eobj1.hashcode());
    System.out.println(eobj2.hashcode());
  }
  catch(CloneNotSupportedException)
  {
    System.out.println("Inside catch block");
  }
  }                            
} 
class Employee  implements cloneable
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

    void Display()
    {
        System.out.println("Employee name:"+this.Name);
        System.out.println("Employee Age:"+this.Age);
        System.out.println("Employee salary:"+this.Salary);
        System.out.println("Employee Address:"+this.address);
    }
    public Object clone() throws CloneNotSupportedException
    {
       return super.clone();
    }
}