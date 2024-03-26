import java.util.*;
class ExeptionDemo3
{
    public static void main(String Arg[])
    {
       Demo dobj=new Demo();
       try
       {
        dobj.Division();
       }
       catch
      {
       System.out.println("Inside catch");
      }
      finally
      {
        System.out.println("Inside finally
        ");
      }
    }
}
class Demo
{
    public void Division()throws ArithmaticExeption
    {
        scanner sobj=new Scanner(System.in);

        System.out.println("Enter first number:");
        int iNo1=sobj.nextInt();

        System.out.println("Enter first number:");
        int iNo2=sobj.nextInt();

        int iAns =0;
        iAns = iNo1/iNo2;
        System.out.println("Division is:"+Ans);
    }
}