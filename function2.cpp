#include <iostream>
#include <string>

void customMessage(const std::string message)
{
  std::cout << "The string argument you used is: " << message << std::endl;
};

int main()
{
  std::string mymessage = "My Custom Message.";
  customMessage(mymessage);
}