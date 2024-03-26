
class Single
{
    public static void main(String A[])
    {
     Derived dobj=new Derived();
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