import java.util.*;
class Program281
{
   public static boolean Checkbit(int iNo,int iPos)
   {
    int iMask=0x00000001;
    int iResult=0;
    int ipos=0;

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
        int iNo=0,iPos=0;
        boolean bRet=false;

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();

         System.out.println("Enter the number :");
        iPos=sobj.nextInt();

        bRet=Checkbit(iNo,iPos);

       if (bRet==true)
        {
         System.out.println("bit is ON at given position");
       }
       else
       {
        System.out.println("bit is OFF at given position");
       }

      
    }
}