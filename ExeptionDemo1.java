import java.util.*;
class ExeptionDemo1
{
    public static void main(String Arg[])
    {
        scanner sobj=new Scanner(System.in);

        System.out.println("Enter first number:");
        int iNo1=sobj.nextInt();

        System.out.println("Enter first number:");
        int iNo2=sobj.nextInt();

        int iAns =0;
        iAns = iNo1/iNo2;

        System.out.println("Division is:"+iAns)

    }
}