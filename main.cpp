#include <iostream>
#include <Numbers.hpp>

int main()
{
  Numbers point1(3.0, 4.0, 5.0);
  
  Numbers point2(3.0, 4.0, 5.0);
  
  if(point1 == point2)
  {
   std::cout<<"point1 and point2 are equal\n";
  }
  else
  {
   std::cout<<"point1 and point2 are not equal\n";
  }
  return 0;
}