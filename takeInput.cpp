#include <iostream>

int main(void){
  int x{};
  int y{};
  std::cout << "Enter two integer followed by a space: ";
  std::cin >> x >> y;

  std::cout << "You entered " << x << "&" << y << std::endl;
}