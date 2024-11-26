#ifndef __NAMESPACE__
  #define __NAMESPACE__
  #include <iostream>


  namespace Namespace //any name except reserved one
  {
    void test(); // -> namespace::test()
  }
    /*void test(); -> test()*/
  
  namespace TooLongNamespaceName
  {
    void test();
  }
  namespace TLNSN = TooLongNamespaceName; //Alias, same as using TLNSN = TooLongNamespaceName but using is for everything -> using char = int to make char i = 2;

//anonymous namespace
  namespace
  {
    void sex()
    {
      std::cout << "hello" << std::endl; //Cannot acces outside this file (and linked)
    }
  }

#endif // !__
