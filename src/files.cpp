#include "../include/main.hpp"
#include <iostream>
#include <string>
#include <fstream>

/*
   std::ios::out, std::ios::in, 
   std::ios::binary
   
   std::ios::trunc supprime le contenu et remplace
   std::ios::ate met la position du "curseur" a la fin
   std::ios::app met a la fin
 */

void files()
{
  std::ifstream file{"/home/lykoro/Documents/cours/C++/files/file.txt"}; // std::ios::in
  std::string name{""};

  if(file.is_open())
  {
    file >> name;
    std::cout << name << std::endl;//will output the fist word
    
    file >> name;
    std::cout << name << std::endl; //will output the second word
  }

  std::getline(file >> std::ws, name);
  std::cout << name << std::endl;
  file.close();

  std::ofstream temp{"/home/lykoro/Documents/cours/C++/files/temp.txt"};
  if(temp.is_open())
  {
    temp << "this is a temporary file\n";
    temp << "I'm pretty sure of that";
    temp.close();
    std::ifstream file{"/home/lykoro/Documents/cours/C++/files/temp.txt"};
    
    std::cout << "content of the temporary file : " << std::endl; 

    std::getline(file, name);
    std::cout << name << std::endl;

    std::getline(file, name);
    std::cout << name << std::endl;
    file.close();
  }

  remove("files/temp.txt");
}
