#pragma once

#include "Shape.h"

namespace shape{
  class Rect : public Shape {

    private: double _width;
    private: double _height;
    private: double _area;

    //double width = 3
    //double height= 5
    //Student *bob = ...

    public: Rect(const double &width, const double &height);

    public: double getWidth() const;
    public: void setWidth(const double &value);

    public: double getHeight() const;
    public: void setHeight(const double &value);

    public: double getArea() const;

    private: void updateArea();
  };
}
