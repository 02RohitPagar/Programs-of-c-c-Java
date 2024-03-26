class Array1
{
    public static void main(String Arg[])
    {
        //1
        int Arr[]={11,21,51,101};
        //2
        int Arr2[]=new int [4];
        Arr[0]=11;
        Arr[1]=51;
        Arr[2]=51;
        Arr[3]=101;

        System.out.println("Length of array is:"+Arr.length);
      
        int iCnt =0;

        for (iCnt =0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}