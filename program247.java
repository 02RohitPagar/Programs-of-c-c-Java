import java.util.*;
class Program247


{
    public static void EvenoddFactors(int iNo)
    {
       int iFact=1;
       int iCnt=0;
       int iSumEven=0;
       int iSumodd=0;
 
       for(iCnt=1;iCnt<=iNo;iCnt++)
       {
        if ((iNo%iCnt)==0)
        {
            if ((iCnt%2)==0)
            {
               iSumEven=iSumEven+iCnt; 
            }
            else
            {
                iSumodd=iSumodd+iCnt;
            }
        }
       }
        System.out.println("Addition of even factors is:"+iSumEven);
        System.out.println("Addition of Odd factors is:"+iSumodd);

    }
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
 
        int iValue=0;
        System.out.println("Enter the number:");
        iValue=sobj.nextInt();

     EvenoddFactors(iValue);

       sobj.close();
      
    }
}