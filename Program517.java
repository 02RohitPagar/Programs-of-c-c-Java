import java.util.*;

class Program517
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();

        str=str.trim();

        str=str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        int iMax=0;
        String Maxstr="";

        int iCnt=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if (Arr[iCnt].length()>iMax) 
            {
                iMax=Arr[iCnt].length();
                Maxstr=Arr[iCnt];
            }
        }
        System.out.println("Word is:"+Maxstr+"having length:"+ iMax);


    }

}