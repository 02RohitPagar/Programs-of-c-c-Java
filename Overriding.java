class Overriding
{
    public static void main(String A[])
    {
         Base bobjb =new Derived();
         bobjb.fun();
         bobjb.gun();
         bobjb.sun();
         bobjb.run();
        // bobjb.run(11);
       // bobjb.mun();
    }   
}
class Derived Base
{
  public void fun()
  {system.out.pintln("Inside base fun");}
  public void gun()
  {system.out.pintln("Inside base gun");}
  public void sun()
  {system.out.pintln("Inside base sun");}
  public void run()
  {system.out.pintln("Inside base run");}
}
class Derived extend Base
{

    public void fun()
        {system.out.pintln("Inside Derived fun");}
    public void sun()
    {system.out.pintln("Inside Derived ssun");}
    public void run()
    {system.out.pintln("Inside Derived run with one paratmetre");}
    public void mun()
    {system.out.pintln("Inside Derived mun");}

    }