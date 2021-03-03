#include <iostream>

void greet()
{
  std::cout << "Hello" << std::endl;
};

void addTwoValues(int a , int b){
  std::cout << a + b << std::endl;
};

int main(){
  greet();
  addTwoValues(4, 5);
  return 0; 
}