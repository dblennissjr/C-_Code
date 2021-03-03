#include <iostream>
#include <string>

using namespace std; 

int main(){
  string s1 {"The secret word is boo."};
  string word {};

  cout << "Enter word to find: ";
  cin >> word;

  size_t position = s1.find(word);

  if (position != string::npos){
    cout << "Your selection " << word << " is in the secret phrase!" << endl;
  }
  else{
    cout << "Your word selection was not in the secret phrase!" << endl;
  }

  return 0;
}