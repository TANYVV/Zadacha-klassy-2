#include <iostream>

class Numbers
{
  double m_a;
  double m_b;
  double m_c;
  
public:
  Numbers(double a, double b, double c)
    : m_a{a}
    , m_b{b}
    , m_c{c}
  {}
  void setValues(double a, double b, double c)
  {
    m_a = a;
    m_b = b;
    m_c = c;
  }

  void print()
  {
    std::cout<<"<"<<m_a<<" ,"<<m_b<<" ,"<<m_c<<">";
  }

  bool operator==(const Numbers& obj)
  {
    if (this == &obj) return true;

    return ((m_a == obj.m_a) && (m_b == obj.m_b) && (m_c == obj.m_c));
  }
};

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
  
  Numbers point3;
  point3.setValues(7.0, 8.0, 9.0);

  if(point1.isEqual(point3))
  {
    std::cout<<"point1 and point3 are equal\n";
  }
  else
  {
    std::cout<<"point1 and point3 are not equal\n";
  }

  return 0;
}