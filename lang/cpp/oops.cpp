#include <iostream>
using namespace std;
class Student {
  private:
    int rollno;
    std::string name ;
  public:
   void input(){
      std::cout << "Enter roll no";
      std::cin >> rollno;
      std::cout << "Enter Name ";
      std::cin >> name;
    }

    void show(){
     std::cout << rollno;
     std::cout << " " <<endl;
     std::cout << name ;
    }
};
int main () {
  Student S1;
  S1.input();
  S1.show();
  return 0;
}
