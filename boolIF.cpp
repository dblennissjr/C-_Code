#include <iostream>

int main()
{
  bool mycondition = false;
  int x;
  
  // unary operator ? checks the value of the condition
  x = (mycondition) ? 1 : 0; 
  std::cout << "The value of x is: " << x << std::endl;
}
