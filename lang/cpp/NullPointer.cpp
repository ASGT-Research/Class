#include <iostream>
using namespace std;
int main(){
  int *ptr  ;
  cout << *ptr << endl;

  ptr = (int*)malloc(2*sizeof(int));

  if (ptr == 0 ) 
    {
      cout << "memory could not allocate " << endl; 
  }else 
  {
   cout << "memory allocate " << *ptr <<endl; }
return 0;}
