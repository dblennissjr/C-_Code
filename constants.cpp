#include <iostream>

using namespace std;

int main(){
  const int i = 3;
  const float pi = 3.14;

  cout << "Constant variable i = " << i << endl;
  cout << "Constant variable pi = " << pi << endl;

  // i = 4; throws an error
  // pi = 3.25; throws an error

  return 0;
}