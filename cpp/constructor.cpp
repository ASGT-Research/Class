#include <iostream>
using namespace std; 
class student{
public:
  int roll_no;
  string name ; 
  int marks[3];
  //default constructor
  student()
    {
    cout << "constructor is called" << endl;
    }
  //parameterized constructor
  student(int roll_no)
  {
    this->roll_no = roll_no;
    cout << "constructor is called" << endl;
  }
  // Copy constructor
    student(student const & S1)
    { this->name = S1.name;
      this->roll_no = S1.roll_no;
      
    }
  //Distructor
  ~student()
  {
   cout << "Distructor is invoked" <<endl;
  }

};

int main(){
  student S1 ;
  student S2 = student(12345);
  cout  << S2.roll_no << endl;
  student S3 =  student(S1); 
  S1.roll_no = 35534;
  S1.name = "Apoorv Singh";
  S1.marks[0] = 45;
  S1.marks[1] = 50;
  S1.marks[2] = 55;
cout << S1.roll_no << endl << S1.name<<endl  << S1.marks[0]<< endl << S1.marks[1] << endl <<  S1.marks[2] << endl ;
//cout << S3.roll_no << endl << S3.name<<endl<< S3.marks[0]<< endl << S3.marks[1] << endl<<  S3.marks[2] << endl ;

  return 0;}
