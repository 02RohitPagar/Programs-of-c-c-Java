class Final1
{
    public static void main(String A[])
    {
       Demo dobj=new Demo();
       system.out.pintln("Value of A:"+dobj.A);
       system.out.pintln("Value of B:"+dobj.B");
       dobj.A++;
      // dobj.B++;

      Demo dobj2=new Demo(51,101);
       system.out.pintln("Value of A:"+dobj2.A");
       system.out.pintln("Value of A:"+dobj2.B");
    }   
}
class Demo
{
  public int A;
  public final int B;
  Demo()
  {
    A=11;
    B=21;
  }
  Demo(int i,int j)
  {
    A=i;
    B=j;
    
  }
}