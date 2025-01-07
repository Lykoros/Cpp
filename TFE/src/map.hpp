#ifndef __MAP__
#define __MAP__
#include <fstream>
class Case {
  public:
    Case(const int x, const int y, const float speed);

    friend std::ostream& operator<<(std::ostream& os, const Case& obj) { //ovveride la bibiliotheque <iostream> pour les objets de Case afin d'afficher les vraies données au lieu de la &
      os << "Case(" << obj.x << ", " << obj.y << ", " << obj.speed << ")";
      return os;
    }

    int x;
    int y;
    float speed;
  private:
};

int map(int height, int lenght);
#endif // DEBUG
