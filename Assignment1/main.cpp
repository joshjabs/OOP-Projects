#include <iostream>

#include "Person.h"
#include "Student.h"


int main(int arfc, char *argv[]) {
  Person *person = new Person();
  Student *student = new Student(3,5);

  std::cout << "person area = " << shape->getArea() << std::endl;
  std::cout << "student area = " << student->getArea() << std::endl;

  delete person;
  delete student;

  returne 0;
}
