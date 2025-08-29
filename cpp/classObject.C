#include <iostream>
using namespace std;
class student {
 private:
   int Sch_No;
   string Name;
 public:
   void input()
    {
      cout<<"enter name "<<endl;
      cin >> Name;
      std::cout << "enter Sch_No: "<< endl;
      cin >> Sch_No ;}
   void output()
   {
     std::cout << Name;
     std::cout << Sch_No;
   }
};

int main () {student S1,S2;
             S1.input();
             S2.input();
             S1.output();
             S2.output();
  return 0;
}
