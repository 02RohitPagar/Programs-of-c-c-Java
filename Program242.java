import java.util.*;
class Arithmatic
{
    public int iValue1;
    public int iValue2;

     public Arithmatic(int A,int B)
    {
        this.iValue1=A;
        this.iValue2=B;
    }
     public int Addition()
    {
      int iSum=0;
        iSum=this.iValue1+this.iValue2;
        return iSum;
    }
}
class Program242
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iNo1,iNo2=0;
        int iAns=0;

        System.out.println("Enter first number");
        iNo1=sobj.nextInt();

         System.out.println("Enter second number");
        iNo2=sobj.nextInt();

         Arithmatic aobj=new Arithmatic(iNo1,iNo2
         );
        iAns=aobj.Addition();
       System.out.println("Addition is:"+iAns);

    }
}