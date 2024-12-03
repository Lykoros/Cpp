#include "../include/main.hpp"
#include "../include/object.hpp"
#include <iostream>

/*With struct*/
/*struct : public data (default)*/
/*class : private data (default)*/

/*struct Point
{
  int x;
  int y;
};

void showCoordonates(int x, int y)
{
  std::cout << "(" << x << "," << y << ")" << std::endl;
}

void object()
{
  Point p{145,38};
  showCoordonates(p.x, p.y);

  p.x = 64;
  showCoordonates(p.x, p.y);
}*/

/*
 Acces level : public, private, protected
 */

Point::Point()
{
  std::cout << "Creating a Point : " << this << std::endl; //this stand for current instance (&px) the address of the current object
}

Point::Point(const Point &p)
{
  std::cout << "Copying a point : " << this << std::endl; //this stand for current instance (&px) the address of the current object
}

Point::~Point()
{
  std::cout << "Destructing a point : " << this << std::endl; //this stand for current instance (&px) the address of the current object
}

void object()
{
    Point p{}; //creating an object and with the type(like int etc) of the class like with struct
    Point p2{p}; //copy constructor

}
