import java.util.*;
class Program265
{
   public static boolean Checkbit(int iNo)
   {
    int iMask=256;
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
         System.out.println("9th bit is ON");
       }
       else
       {
        System.out.println("9th bit is OFF");
       }

      
    }
}