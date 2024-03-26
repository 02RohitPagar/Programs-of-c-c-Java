
class Marvelous
{
 public int oi;
 public int j;

 public Marvelous()
 {
  System.out.println("Inside default constructor");
  this.i=0;
  this.j=0; 
}

 public Marvelous(int a,int b)
 {
    System.out.println("Inside parametrised constructor");
  this.i=a;
  this.j=b; 
}
 public void Fun()
 {
    System.out.println("Inside fun method");

 }
}

class Demo
{
    public static void main(string arg[])
    {
        System.out.println("Inside main");

        Marevlous mobj1 = new Marvelous();
        Marevlous mobj2 = new Marvelous(11,21);
    
        System.out.println(mobj2.i);
        System.out.println(mobj2.j);

        mobj.Fun();

    }
}