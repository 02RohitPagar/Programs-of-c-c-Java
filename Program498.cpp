#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

    bool BinarySearch(int iNo)
    {
        int iStart=0;
        int iEnd=iSize-1;
        int iMid=0;

        bool bFlag=false;

       while (iStart<=iEnd)
       {
        iMid=iStart+(iEnd-iSize)/2;

         if ((Arr[iMid]==iNo)||(Arr[iStart]==iNo)||(Arr[iEnd]==iNo))
         {
            bFlag=true;
            break;
         }
         else if (Arr[iMid]<iNo)
         {
            iStart=iMid+1;
         }
         else if (Arr[iMid]>iNo)
         {
            iEnd=iMid-1;
         }
       }
        return bFlag;
    }

    void Insertionsort()
    {
        int selected=0;

        int i=0;
        int j=0;
        int itemp=0;

       for ( i = 1; i < iSize; i++)
       {
            for (j = i-1, selected=Arr[i];((j>=0)&&(Arr[j]>selected)); j++)
            {
                if (Arr[j]>Arr[])
                {
                  Arr[j+1]=Arr[j];
                   
                }
                itemp=Arr[i];
                Arr[i]=Arr[];
                Arr[]=itemp;
            }
       }
    }
     

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue=0;
    bool bRet=false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout << "Enter the element that you want to search" <<endl;
    cin>>iValue;

    aobj->Revers();
    aobj->Display();

    aobj->Bubblesort();
    aobj->Display();

    aobj->Bubblesortdecrese();
     aobj->Display();
     
    delete aobj;

    return 0;
}