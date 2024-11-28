#include "../include/main.hpp"
#include <iostream>

//Usaly in hpp file
struct Product
{
  std::string name;
  float price;
  bool available;
};

void structure()
{
  struct Product /*name*/p{"Papier toilette", 1.29, true};
  std::cout << "the price of the product is " << p.price << std::endl;

  using Product = struct Product;
  Product o{"water", 2.5, false};
  std::cout << "The product that cost 2.5 is " << o.name << std::endl;
}
