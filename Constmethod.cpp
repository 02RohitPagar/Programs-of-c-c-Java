#include<iostream>
using namesapce std;

class Demo
{
 public:
   int i;
   int j;
   int k;
  //parametrise constructor
   Demo(int a,int b,int c)
   {
    i = a;
    j = b; 
    k = c;
   }
   void Fun()
   {
    i++;
    j++;
    k++;
   }
    void Gun(int x,const int y)const
   {
    int no1 = 10;
    const int no2 =20;

    x++;
   //y++;
    no1++;
   // no2++;      
   // i++;
   //j++;
   //k++;
   }
   
};

int main()
{
  Demo obj(11,21,51);
  
  obj.Fun();
  obj.Gun(51,101);

  const Demo obj2(11,21,51);
 //obj2.Fun();
  obj2.Gun(51,101);

   return 0;
}