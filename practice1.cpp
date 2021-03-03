#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char** argv){ // values passed in a command line

  std::cout << "Hello world!" << std::endl;

  if (argc != 1){
    std::cout << "You entered " << argc << " arguments" << std::endl;
  }

  for (int i = 0; i < argc; ++i){
    std::cout << argv[i] << std::endl;
  }

  return 0;
}