import java.util.*;
class Program246
{
    public static void EvenoddFactors(int iNo)
    {
       int iFact=1;
       int iCnt=0;
 
       for(iCnt=1;iCnt<=iNo;iCnt++)
       {
        if ((iNo%iCnt)==0)
        {
            if ((iCnt%2)==0)
             {
               System.out.println("Even factor is:"+iCnt); 
            }
            else
            {
            System.out.println("odd factor is:"+iCnt); 

            }
        }
       }

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