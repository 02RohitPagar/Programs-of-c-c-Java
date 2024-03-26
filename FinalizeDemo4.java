
class FinlizeDemo3
{
  public static void main(String arg[]) 
  {
    
    Emplpoyee eobj1=new Employee("Amit,70000,28,karve Road pune");
   
     System.out.println(eobbj1);

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
    public String toString()
    {
        return Name+" "+Salary+" "+Age+" "+Address";
    }

}