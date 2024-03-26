import java.util.*;
class Program277
{
   public static int Togglebit(int iNo)
   {
    int iMask=0x00000040;
    int iResult=0;
    iResult=iNo ^ iMask;

        return iResult; 
   }
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        int iRet=0;

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();

        iRet=Togglebit(iNo);

         System.out.println("Updated number is:"+iRet);
      
    }
}