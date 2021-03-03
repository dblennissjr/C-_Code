#include <iostream>

class myClass {
  private:
    int x;
    int y;
  public:
    myClass(){
      std::cout << "Object created" << std::endl;
    }
    ~myClass(){
      std::cout << "Object destroyed" << std::endl;
    }
};

int main(void){
  myClass object;
}