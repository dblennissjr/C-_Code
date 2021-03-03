#include <iostream>
#include <string>

using namespace std;

class Student{
  
  private:
    string name;
    string year;
    double gpa;
  
  public:
    static int count;
    static string mascot;

    Student(string name, string year, double gpa){
      name = name;
      year = year;
      gpa = gpa;
      count++;

      cout << "**Student Count** = " << count << endl;
      cout << "Student: " << name << " -- " << year << " -- " << gpa << endl;

  }
    string get_name(){
      return name;
  }

};

int Student::count = 0;
string Student::mascot = "Bears";

int main(){

    Student student1("Darrell", "Junior", 3.99);
    student1.get_name();
    Student student2("Nolan", "Freshman", 4.00);

    cout << student2.count << endl;
    cout << student1.mascot << endl;
    cout << student2.mascot << endl;
    
    return 0;
}