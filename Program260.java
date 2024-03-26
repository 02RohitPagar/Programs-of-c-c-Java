import java.util.*;

class Program260
{
    public static int CountCapital(String str)
    {
    int iCnt=0;
    int iCount=0;
    char Arr[]=str.toCharArray();

    for(iCnt=0;iCnt<str.length();iCnt++)
    {
       if ((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z')) 
       {
        iCount++;
       }
    }
    return iCount;
    }
    public static void main(String Arg[])
    {
     Scanner sobj=new Scanner(System.in);

     String str =null;
     int iRet=0;

     System.out.println("Enter your name:");
     str=sobj.nextLine();


    CountCapital(str);

         System.out.println("number of capital character are"+iRet);

       sobj.close();
      
    }
}