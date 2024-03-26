 #include<iostream>
using namesapce std;

class demo
{
   public:
   int i,j,k;
   demo()
   {
    cout<<"inside constructor\n";
   }
   ~demo()
   {
    cout<<"inside destructor\n";
   }
   void display()
   {
    cout<<"inside display\n";
   }

}
int main()
{
  demo obj1;
  obj1.display();

  demo *prt = new demo;
  
  ptr ->display();
  delete ptr;

    return 0;
}