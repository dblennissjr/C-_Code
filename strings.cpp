#include <iostream>
#include <string>

using namespace std;

int main(){

  string s1 {"This is a test"};
  string s2 {"Frank"};

  cout << s1.substr(0,4) << endl; // This
  cout << s1.substr(5,2) << endl; // is
  cout << s1.substr(10,4) << endl; // test

  cout << s1.find("This") << endl;
  cout << s1.find("test") << endl;
  cout << s1.find("XX") << endl; //provides garbage values

  cout << s2.length() << " characters in " << s2 << endl;

  return 0;
}