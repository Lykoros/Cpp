#include "../include/main.hpp"
#include <iostream>
int main()
  {
    std::cout << "Trying modularity :" << std::endl;
    helloWorld();
    
    std::cout << "\nTrying error management :(still don't understand a shit)" << std::endl;
    createPlayer("Robert", 25);
    error();

    std::cout << "\nTrying enumeration :" << std::endl;
    enumeration();

    std::cout << "\nTrying files :" << std::endl;
    files();

    std::cout << "\nTring namespaces" << std::endl;
    nameSpace();

    std::cout << "\nTring structure" << std::endl;
    structure();

    std::cout << "\nTring object" << std::endl;
    object();

    std::cout << "\nTrying Method" << std::endl;
    Method();

    return 0;
  }
