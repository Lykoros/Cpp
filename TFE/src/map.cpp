#include "map.hpp"
#include <iostream>

Case::Case(const int x, const int y) : x(x), y(y) {
  std::cout << " ■ ";
}

int map(int size = 10) {
  Case* square[size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++)
      square[i] = new Case{i,j};
    std::cout << std::endl;
  }

  return 0;
}
