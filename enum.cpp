#include <iostream>

using namespace std;

int main(){

  enum DaysofTheWeek{
    Sunday = 1, 
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
  };

  cout << "Monday is assigned a value of: " << Monday << endl; // value is 2
  cout << "Wednesday is assigned a value of: " << Wednesday << endl; //value is 4

  return 0;
}