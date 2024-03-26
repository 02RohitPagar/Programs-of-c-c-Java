import java.util.*;
class Userdefined
{
    public static void main(String Arg[])
    {
      Scaner sobj = new scanner(System.in);
      System.out.println("Enter your Age:");
      int iAge = sobj.nextInt();

      try
      {
        if (iAge < 18)
        {
            throw new AgeInvalid("Your age is below 18");
        }
        else
        {
            System.out.println("Login succesfull..");
        }
        catch(AgeInvalid obj)
        {
            System.out.println("inside catch blockl");
            System.out.println(obj);
        }
      }
    }
}
class Age invalide extends Exeption
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}