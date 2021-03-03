#include <iostream>
#include <array>

int main()
{
  std::array<int, 5> Example;
  Example[0] = 1;
  Example[1] = 2;
  Example[2] = 3;
  Example[3] = 4;
  Example[4] = 5;

  std::cout << "Is the array empty?  " << Example.empty() << std::endl;
  std::cout << "Element at the front of the array: " << Example.front() << std::endl;
  std::cout << "Element at position 3 is: " << Example.at(3) << std::endl;

  return EXIT_SUCCESS;
}