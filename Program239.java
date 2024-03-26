import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

class Program239
{
    public static void main(String Arg[]) 
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
        int iNo1,iNo2=0;
        int iAns=0;

        try
        {
        System.out.println("Enter first number");
        iNo1=Integer.parseInt(bobj.readline());

         System.out.println("Enter second number");
        iNo2=Integer.parseInt(bobj.readline());

        iAns=iNo1+iNo2;
       System.out.println("Addition is:"+iAns);
          bobj.close();
        }
           catch(Exception eobj)
        {
          System.out.println("Exception occured");
        }

    }
}