import java.util.*;

class Program527
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();
        str=str.replaceAll("\\s+"," ");

        str=str.toLowerCase();

        char Arr[]=str.toCharArray();
        int iCnt=0,frequency=0;


        HashMap <Character,Integer>hobj=new HashMap<>();

        for(char ch:Arr)
        {
            if (hobj.containsKey(ch)) 
            {
                frequency=hobj.get(ch);
                hobj.put(ch, frequency+1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }
        System.out.println(hobj);
    }

}