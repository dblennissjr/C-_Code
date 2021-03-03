#include <iostream>
#include <string>

using namespace std;

class Car {
  private:
    string brand;
    string model;
    string color;
    int year;
  public:
    Car(string w, string x, string y, int z){
      brand = w;
      model = x;
      color = y;
      year = z;
    }
    void carBrand(){
      cout << "Car Brand: " <<  brand << endl;
    }
};

int main(){

  Car Car1("BMW", "X5", "Silver", 2020);
  Car Car2("Ford", "F-150", "Red", 2019);

  Car1.carBrand();

  return 0;
}