#include <iostream>
using namespace std;
int main(){
   printf("In computing, a null pointer or null reference is a value saved for indicating that the pointer or reference does not refer to a valid object\n");
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
