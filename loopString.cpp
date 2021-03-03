#include <iostream>
#include <string>

using namespace std;

int main(){

  string s1 {"Apple"};

  for (size_t i {0}; i < s1.length(); ++i){
    cout << s1.at(i); // or s1[i]
    cout << endl;
  }

  return 0;
}