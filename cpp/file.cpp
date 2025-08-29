#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream onFile;
  onFile.open("/data/data/com.termux/files/home/Class/cpp/file.txt");
  onFile << "my name is apoorv ";

  cout << "file is created";
  onFile.close();

return 0;}
