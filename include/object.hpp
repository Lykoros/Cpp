#ifndef __OBJECT__
  #define __OBJECT__

  class Point
  {
    public:
      Point(); //if not def, will use default constructor
      /*Point(const Point& p) = delete; don't run it by default*/

      Point(const Point& p); //same but for copy constructor
      /*Point(Point&& p); move constructor, same as copy but don't copy*/

      ~Point(); //Destructor
  
    private:
  };

#endif // !__OBJECT__
  #define __OBJECT__
