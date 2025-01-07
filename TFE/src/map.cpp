#include "map.hpp"
#include <iostream>
#include <fstream>

int map(int height = 10, int lenght = 10) {
  Case* square[height][lenght];
  std::ifstream mapFile{"./src/map1"};
  float speed;

  for (int x = 0; x < height; x++) {
    for (int y = 0; y < lenght; y++) {
      mapFile >> speed;
      square[x][y] = new Case{x,y,speed};
    }
    std::cout << std::endl;
  }

  for (int x = 0; x < height; x++) { //Désaloue la mémoire
    for (int y = 0; y < lenght; y++) {
      delete square[x][y];
    }
  }

  return 0;
}

