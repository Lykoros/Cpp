#include "../include/main.hpp"
#include <iostream>

void enumeration()
{
  enum NaturalElement
  {
    earth, //0
    // we can do earth = 1, and so air will be equal to 2 etc
    air,   //1
    fire,  //2
    water //3
  };//global range

  /*enum other
  {
    either,
    fire will cause conflict because of the fire up
  };*/

  NaturalElement ne{water};
  std::cout << ne << std::endl;
  
  if(ne == water)
    std::cout << "that's what I call water" << std::endl;

  ne = fire;
  std::cout << ne << std::endl;

  enum class /*or sturct*/name
  {
    Romuald,
    Josef,
    Rudolf
  };//not global range

  name n{name::Josef};

  std::cout << static_cast<int>(n) << std::endl; //static_cast<int>(n) turn n variable into an int type

  if(n == name::Josef)
    std::cout << "JOSEF JOESTAR" << std::endl;
  
  enum class smallint : int {};//small int is equal to int with an enumeration defined
  enum class boolean : bool
  {
    True, //0
    False //1mt
          //Can't put more because of bool (1 or 0)
  };
}
