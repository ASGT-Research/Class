#include <iostream>
using namespace std ;
int main(){
  int n = 10;
  void *ptr = &n;
  cout << *(int*) ptr << endl;

  return 0;}
