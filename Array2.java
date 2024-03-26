class Array2
{
    public static void main(String Arg[])
    {
        //1
        int Arr[][]={10,20,30},{40,50,60},{70,80,90};
        //2
        int Brr[][]=new int [3][3];
        Brr[0]=10;
        Brr[1]=20;
        Brr[2]=30;

        Brr[1]=40;
        Brr[1]=50;
        Brr[1]=60;

        Brr[2]=70;
        Brr[2]=80;
        Brr[2]=90;

        System.out.println("Length of array is:"+Arr1.length);
    
        int i=0,j=0;
        for (i =0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;i++)
            {
            System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}