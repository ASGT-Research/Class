#include <iostream>
using namespace std;
int a = 10;
int main(){
  int b = 20 ;
  cout<<a<<endl<<b<<endl;
  int a = 5;
  cout<<a<<endl<<b<<endl;
  cout<<::a<<endl<<b<<endl;
return 0;}
