#include <iostream>

using namespace std;

int main(){
  string cars[4] {"Ford", "BMW", "Audi", "Chevy"};

  cout << cars[1] << endl;

  for (int i = 0; i < 4; i++){
    cout << cars[i] << endl;
  }

  return 0;
}