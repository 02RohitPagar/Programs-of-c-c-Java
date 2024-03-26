import java.util.*;
class OOP
{
    public static void main(String Arg[])
    {
        int No1=0,No2=0,Ans=0;
        Scanner sobj = new Scanner(System.in);

        System.out.printn("Enter first number:");
        No1=sobj.nextInt();
        System.out.printn("Enter second number:");
        No2=sobj.nextInt();

        Arithmatic aobj =new Arithmatic(No1,No2);
        Ans=aobj.Addition();
        System.out.printn("Addition is:"+Ans);

        Ans=aobj.Substraction();
        System.out.printn("Substraction is:"+Ans);

    }
}
class Arithmatic
{
    public int VAlue1;
    public int VAlue2;

    public Arithmatic(int A,int B)
    {
        this.Value1=A;
        this.Value2=B;
    }
   public int Addition()
   {
    int Result = 0;
    int Result =this.Value1+this.Value2;
    return Result;
   }
   public int Substraction()
   {
    int Result = 0;
    int Result =this.Value1-this.Value2;
    return Result;
   }
}
