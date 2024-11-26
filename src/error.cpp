#include "../include/main.hpp"
#include <iostream>
#include <cassert> //only useful for developement side
#include <string>

void createPlayer(std::string name, int level)
{
  assert(level > 0 && "The min level is 1"); //add -DNDEBUG to ignore assertion
  std::cout << "Name : " << name << "\nLevel : " << level << std::endl;
}

void error()
{
  /*throw std::invalid_argument("Not right argument type\n");*/
/*terminate called after throwing an instance of 'std::invalid_argument'*/
/*  what():  Not right argument type*/

  try 
  { //nicer argument
    /*code that can make an error*/
    throw std::exception();
  }
  catch(std::invalid_argument& err)
  {
    std::cout << err.what() << "Invalid argument" << std::endl;
  }
  catch (std::exception& err)
  {
    std::cout << err.what() << "\nAn error occured" << std::endl; //show error type
  }
  std::cout << "Will still trigger even with the error(thx to the try)" << std::endl;
}

