import java.util.*;

class Program525
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();
        str=str.replaceAll("\\s+"," ");

        str=str.toLowerCase();

        char Arr[]=str.toCharArray();

        int frequency[]=new int[26];
        int iCnt=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            frequency[((int)Arr[iCnt])-'a']++;
        }
        System.out.println("frequenvy of each letter is:");
        for(iCnt=0;iCnt<frequency.length;iCnt++)
        {
            if (frequency[iCnt]!=0) 
            {
                System.out.println((iCnt+'a')+"occurs"+frequency[iCnt]+"times");
            }
        }
    }

}