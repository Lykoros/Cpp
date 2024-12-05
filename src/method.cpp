#include "../include/main.hpp"
#include "../include/object.hpp"
#include <iostream>
#include <string>

Window::Window(const std::string t) : title(t) { //same as below
  /*this->title = title*/
  std::cout << "Window : " << title << std::endl;
}

Window::Window(const std::string t, int h, int w) : title(t), width(w), height(h) {
  std::cout << "Window : " << title << "\nSize : " << height << "," << width << std::endl;
}

void Window::run() const noexcept {
  std::cout << "Displaying..." << std::endl;
}

void Method() {
  Window app{};
  Window newapp{"My window"};
  Window sizedApp{"My sized window", 720, 1080};
  
  app.run();
}
