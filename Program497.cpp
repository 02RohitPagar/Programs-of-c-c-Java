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

    void Selectionsort()
    {
        int min_index=0;

        int i=0;
        int j=0;
        int itemp=0;

       for ( i = 0; i < iSize; i++)
       {
        min_index=1;
            for (j = 0; j < iSize; j++)
            {
                if (Arr[j]>Arr[min_index])
                {
                    min_index=j;
                   
                }
                itemp=Arr[i];
                Arr[i]=Arr[min_index];
                Arr[min_index]=itemp;
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