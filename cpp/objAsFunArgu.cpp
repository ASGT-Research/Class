#include <iostream>
#include <iomanip>
using namespace std ;

class Add {int a,b;
  public :
    void get(){
      cout << "Enter two integer no" << endl;
      cin >> a >> b;
    }

    void put(){
      cout << "your result id " << setw(3) << a << " and " << setw(3) << b << endl;
    }

    void count(Add A1,Add A2){
      a = A1.a + A2.a;
      b = A1.b + A2.b;
    }
};

int main(){
  Add A1,A2,A3;
  A1.get();
  A1.put();
  A2.get();
  A2.put();
  A3.count(A1,A2);
  A3.put();
  return 0;
}
