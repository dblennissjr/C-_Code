#include <iostream>

class MyClass{
  private:
    int x, y;
  public:
    MyClass(int xx, int yy)
      :x {xx}, y{yy} // member initializer list
      
    {
      std::cout << "***New MyClass Object Created!***" << std::endl;
    }
    void getX(){
      std::cout << "Attribute X: " << x << std::endl; 
    }
    void getY(){
      std::cout << "Attribute Y: " << y << std::endl;
    }
    void getXplusY(){
      std::cout << "Attribute X + Y = " << x + y << std::endl;
    }
};

int main(void){
  MyClass o{1, 2};
  o.getX();
  o.getY();
  o.getXplusY();
}