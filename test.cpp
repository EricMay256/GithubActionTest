#include <iostream>
#include "Object.hpp"

int main()
{
  Object o;
  std::cout << "tests being run...\n";
  if(o.Cubed(-3) == 27)
  {
    std::cout << "First test passed\n";
  }
  else std::cout << "First test failed\n";
  return 0;
}
