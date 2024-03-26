#include<iostream>
using namespace std;

class demo
{
 public:
    int i;
    int j;
   
   demo() // Default constructor
   {
     cout<<"Inside default constructor\n";
     i = 0;
     j = 0;
   }

   demo (int A,int B) //parametrise constructor
   { 
    cout<<"Inside parametrise cunstructor\n";
    i = A;
    j = B;
   }

   demo (demo &ref)  // copy constructor
   {
    cout<<"Inside copy constructor\n ";
    i = ref.i;
    j = ref.j;
   }
   ~demo ()
   {
    cout<<"Inside destructor\n";
   }
};

int main()
{
  demo obj1;
  demo obj2(11,21);
  demo obj3(obj2);

    return 0;
}