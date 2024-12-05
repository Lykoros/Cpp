#ifndef __OBJECT__
  #define __OBJECT__
  #include <string>

  class Point {
    public:
      Point(); //if not def, will use default constructor
      /*Point(const Point& p) = delete; don't run it by default*/

      Point(const Point& p); //same but for copy constructor
      /*Point(Point&& p); move constructor, same as copy but don't copy*/

      ~Point(); //Destructor
  
    private:
  };

//////////////////////////////////////////////////////////////////////////////////

  class Window {
    public: 
      Window() = default; //Default constructor
      Window(const std::string title);
      Window(const std::string title, int width, int height);
      void run() const noexcept;

    private: 
      std::string title;
      int width;
      int height;
  };

#endif // !__OBJECT__
  #define __OBJECT__
