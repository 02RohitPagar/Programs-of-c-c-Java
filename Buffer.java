import java.io.*;

class Buffer
{
 public static void main(String arg[])
 {
    try
    {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

    System.out.println("Enter the first number :");
    int no1=Integer.parseInt(br.readLine());
    
    System.out.println("Enter the second number :");
    int no2=Integer.parseInt(br.readLine());

    int ans =no1+no2;
    System.out.println("Additon is:"+ans);
    }
    catch(Exception obj)
    {
        
    }
  
 }

}