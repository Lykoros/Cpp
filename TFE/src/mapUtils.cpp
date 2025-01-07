#include "map.hpp"
#include <iostream>

Case::Case(const int x, const int y, const float speed) : x(x), y(y), speed(speed) { //Constructeur
  if (this->speed == 0)
    std::cout << "\033[31m";
  if (this->speed <= .5 && this->speed != 0)
    std::cout << "\033[33m";
  if (this->speed > .5)
    std::cout << "\033[32m";
  
  std::cout << " ■ ";
}

