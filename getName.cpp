#include <iostream>
#include <string>

using namespace std;

int main(){

  string full_name{};

  cout << "Enter full name: ";
  getline(cin, full_name);
  cout << "Your full name is: " << full_name << endl;

  return 0;
}