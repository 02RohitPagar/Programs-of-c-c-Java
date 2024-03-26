
class FinlizeDemo2
{
  public static void main(String arg[])
  {
    Emplpoyee eobj=new Employee("Amit,70000,28,karve Road pune");
   eobj.Display();  
   
   Stringstr="Marvelous";

  System.out.println(eobj.getClass());
  System.out.println(str.getClass());

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

    void Display()
    {
        System.out.println("Employee name:"+this.Name);
        System.out.println("Employee Age:"+this.Age);
        System.out.println("Employee salary:"+this.Salary);
        System.out.println("Employee Address:"+this.address);
    }
}