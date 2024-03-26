import java.util.*;
class Program266
{
   public static boolean Checkbit(int iNo)
   {
    int iMask=65536;
    int iResult=0;
    iResult=iNo & iMask;

     if (iResult==iMask)
        {
        return true;
       }
       else
       {
        return false;
       }
   }
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        boolean bRet=false;

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();

        bRet=Checkbit(iNo);

       if (bRet==true)
        {
         System.out.println("17th bit is ON");
       }
       else
       {
        System.out.println("176th bit is OFF");
       }

      
    }
}