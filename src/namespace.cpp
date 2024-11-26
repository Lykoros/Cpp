#include "../include/main.hpp"
#include "../include/namespace.hpp"
#include <iostream>

void Namespace::test()
{
  std::cout << "test" << std::endl;
}

void nameSpace()
{
  Namespace::test();
}
