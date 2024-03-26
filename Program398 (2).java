import java.util.*;
import LB.Matrix;

interface Calculation
{
    public int Maximun();
    public int Minimum();
}

class MyMatrix extends Matrix implements Calculation
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }
}

class Program398
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        
        System.gc();
    }
}