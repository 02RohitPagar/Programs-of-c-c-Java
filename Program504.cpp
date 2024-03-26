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
    void BubblesortEfficient(char choice)
    {
        int i=0;
        int j=0;
        int itemp=0;
        bool bFlag=false;

    if (choice=='I'||choice=='i')
    {
        for ( i = 0; i < iSize; i++)
       {
        cout<<"Data after pass:"<<(i+1)<<"\n";
        bFlag=false;

            for (j = 0; j < iSize-i-1; j++)
            {
                if (Arr[j]>Arr[j+1])
                {
                    itemp=Arr[j];
                    Arr[j]=Arr[j+1];
                    Arr[j+1]=itemp;
                    bFlag=true;
                }
            }
            if (bFlag==false)
            {
                break;
            }
            Display();
       }
    }
    else if (choice=='D'||choice=='d')
    {
        for ( i = 0; i < iSize; i++)
       {
        cout<<"Data after pass:"<<(i+1)<<"\n";
        bFlag=false;

            for (j = 0; j < iSize-i-1; j++)
            {
                if (Arr[j]<Arr[j+1])
                {
                    itemp=Arr[j];
                    Arr[j]=Arr[j+1];
                    Arr[j+1]=itemp;
                    bFlag=true;
                }
            }
            if (bFlag==false)
            {
                break;
            }

            Display();
       }
    }
    else 
    {
        cout<<"invalid choice...\n";
    }
       
    }
};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue=0;
    bool bRet=false;
    char cChoice='\0';

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout<<"Please enter your chois for sorting:\n";
    cout<<"I/i:Increasing order\n";
     cout<<"D/d:Decreasing order\n";

    cin>>cChoice;
    aobj->BubblesortEfficient(cChoice);
    aobj->Display();
     
    delete aobj;

    return 0;
}