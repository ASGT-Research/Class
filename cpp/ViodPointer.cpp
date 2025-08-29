#include <iostream>
using namespace std ;
int main(){
  printf("A void pointer is a pointer that has no associated data type with it. A void pointer can hold an address of any type and can be typecasted to any type.\n");
  int n = 10;
  void *ptr = &n;
  cout << *(int*) ptr << endl;

  return 0;}
