#include <iostream>
#include <string>

using namespace std;

int main () {
  string s1 {};

  cout << "Enter a string: ";
  getline(cin, s1); // needed when there is whitespace in the input value
  cout << "You entered:  " << s1 << endl;

  return 0;
}