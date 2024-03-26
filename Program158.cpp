#include <iostream>
using namespace std;

class String
{
 private:
   char *str;
   int iSize;

   public:
   String()
   {
    iSize=20;
     str =new char[20];
   }
   String(int X)
   {
    iSize=X;
     str =new char[iSize];
   }
   ~String()
   {
    delete []str;
   }
  void Accept()
  {
    cout<<"Enter the string:"<<endl;
    cin.getline(str,iSize); // scanf,getline,gets,cin.getline(with size)
  }
  void Display()
  {
    cout<<"string is:"<<str<<endl;
  }
  int countCapital()
{
    int iCnt=0;
    char *temp=str;

    while (*temp!='\0')
    {
        if (*temp>='A')&&(*temp<='Z')
        {
            iCnt++;
        }
        temp++;
    }
    return iCnt;
}

};

int main()
{
  String *sobj=new String(30);
  int iRet=0;

  sobj->Accept();
  sobj->Display();
  
  iRet=sobj->countCapital(String);
  cout << "Capital count is:" << iRet<<endl;

 sobj1->Display();
  delete sobj;
  
    return 0;
}