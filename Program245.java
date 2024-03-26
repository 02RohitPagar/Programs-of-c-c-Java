import java.util.*;
class Program245
{
    public static int Factorial(int iNo)
    {
       int iFact=1;
       int iCnt=0;
 
       while (iCnt<=iNo)
        {
        iFact=iFact*iCnt;
         iCnt++;
       }
        return iFact;
       
    }
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
 
        int iValue=0,iAns=0;
        System.out.println("Enter the number:");
        iValue=sobj.nextInt();

        iAns=Factorial(iValue);

       Sysem.out.println("factorial is:"+iAns);
       sobj.close();
      
    }
}