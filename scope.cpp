#include <iostream>

using namespace std;

int main(){
  int gvalue = 10; // global variable

  {
    int lvalue = 20; // local variable
    cout << "Local variable = " << lvalue << endl;
  }

  cout << "Global variable = " << gvalue << endl;
  // cout << "Local variable out of scope = " << lvalue << endl; Generates an error out of scope

  return 0;
}