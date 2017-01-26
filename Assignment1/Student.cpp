#include "Person.h"

namespace person
{
  class Student : public Person {
    private: double _width;
    private: double _height;
    private: double _area;

  public: Student(const double &width, const double &height)
    : _width(width), _height(height), _area(width*height)
    {
    }

    double Student::getWidth() const {
      return _width;
    }

    void Student::setWidth(const double &value){
      if(_width!=value)
      {
          _width=value;
          updateArea();
      }
    }

    double Student::getHeight() const {
      return _height;
    }

    void Student::setHeight(const double &value){
      if(_height!=value)
      {
          _height=value;
          updateArea();
      }
    }


    void Student::updateArea() {
      _area = _width*_height;
    }


  }
}
