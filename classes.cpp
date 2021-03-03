#include <iostream>
#include <string>

using namespace std;

class Student{
  private:
    int studentID;
    string studentName;

  public:
    Student(){
      cout << "**New Student Created**" << endl;
    } // executes with each new instance of the class aka constructor

    void displayStudent(){
      cout << "Student ID: " << studentID << endl;
      cout << "Student Name: " << studentName << endl;
    }

    void studentInput(int ID, string Name){
      studentID = ID;
      studentName = Name;
    }
};

int main(){

  Student student1; // creates a new object of the Student Class
  student1.studentInput(01, "Darrell Blenniss");
  student1.displayStudent();

  return 0;
}