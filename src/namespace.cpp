#include "../include/main.hpp"
#include "../include/namespace.hpp"
#include <iostream>

void Namespace::test()
{
  std::cout << "test" << std::endl;
}

void TLNSN::test()
{
  std::cout << "test2" << std::endl;
}

void nameSpace()
{
  Namespace::test();
  TLNSN::test();
  sex();

  {
    using namespace Namespace; //Will simulate the Namespace::
    test();
  }
}
