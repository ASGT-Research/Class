#include <iostream>
using namespace std;
void ChangeValue(int num){
     num =num+10;
     cout << num << endl;
}
int main () {
  int num = 100;
  cout << num << endl;
  ChangeValue(num);
  cout << num << endl;
  
  return 0;}
