
class Hierarcal
{
    public static void main(String A[])
    {
     Derived dobj1=new Derived();
     Derived dobj2=new DerivedX();
     dobj.Fun();
     dobj.Gun();
    }
}
class Base
{
   public int A,b;
   public Base()
   {
    System.out.printn("Base construcor:");
   }
  public vooid Fun()
  {
    System.out.printn("Base Fun:");
  }
}
class Derived extends Base
{
    public int x,y;
    public Derived()
    {
     System.out.printn("Derived construcor:");
    }
    public vooid Gun()
    {
      System.out.printn("Derived Gun:");
    }
}
class DerivedX extends Base
{
    int p,q;
    public DerivedX()
    {
        System.out.printn("DerivedX construcor:");
    }
    
}