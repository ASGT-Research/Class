#include <iostream>
using namespace std; 

class student {
private:
  int roll_no;
  string name;
  int Marks[5];

public:
  //defalt constructor
  student()
  {
    cout << "constructor is called"<< endl;
  }

  void getData(int roll_no)
  {
    this->roll_no = roll_no; 
    }

  void putData();

~ student()
 {
  cout << "distructor is invoked "<< endl;
 }  
     };

void student::putData()
{
  cout << roll_no << endl;
  cout << name << endl;
}

int main () { student S1;
              int roll_no;
              cout << "Enter Roll no"<<endl;
              cin >> roll_no;
              S1.getData(roll_no);
              S1.putData();
              
  
  return 0;
}


