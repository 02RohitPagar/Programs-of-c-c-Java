#include<iostream>


namespace Marvellous
 {
 void display()
 {
    std::cout<<"inside display of Marvellous\n";
 }
}
namespace Infosystem
 {
    void display()
 {
    std::cout<<"inside display of Infosystem \n";
 }
}
int main()
{
 Marvellous::display();
 Infosystem::display();

 return 0;

}