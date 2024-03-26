import java.util.*;
class Program274
{
   public static int Offbit(int iNo)
   {
    int iMask=0x00000008;
    int iResult=0;
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
        int iNo=0;
        int iRet=0;

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();

        iRet=Offbit(iNo);

         System.out.println("Updated number is:"+iRet);
      
    }
}