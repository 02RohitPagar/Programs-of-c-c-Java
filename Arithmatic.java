package Marvellous;


public class Arithmatic
{
    public int iValue1;
    public int iValue2;

     public Arithmatic(int A,int B)
    {
        this.iValue1=A;
        this.iValue2=B;
    }
     public int Addition()
    {
      int iSum=0;
        iSum=this.iValue1+this.iValue2;
        return iSum;
    }
}
//javac -d.Arithmatic.java