 import java.io.*;
 class Deletefilw
 {
  public static void main(String arg[])
  {
    try
    {
        File fobj= new File("PPA.txt");
        fobj.delete();
    }
    catch(Exception obj)
    {}
   
  }

 }