#include <iostream>
using namespace std;
class A{
  public :
    void show(){
    std::cout << "this is class A";
    }
};
class B :public A{
  public:
    void show(){
      std::cout << "this is class B";
    }
};
int main () {
   B b1;
   b1.show();
   b1.A::show();
   A *p ; B b2;
   p = &b2;
   p->show();
   return 0;
}
