import java.util.*;
class Program280
{
   public static int Offbit(int iNo,int iPos)
   {
    int iMask=0x00000001;
    int iResult=0;
    int ipos=0;
    iResult=iNo & iMask;

     if (iResult==iMask)
        {
         return (iNo^iMask);
       }
       else
       {
        return iNo;
       }
   }
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0,iPos=0;
        int iRet=0;

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();

        System.out.println("Enter the number :");
        iPos=sobj.nextInt();

        iRet=Offbit(iNo,iPos);

         System.out.println("Updated number is:"+iRet);
      
    }
}