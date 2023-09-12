#pragma once

class Numbers
{
  double m_a;
  double m_b;
  double m_c;
  
public:
  Numbers(double a, double b, double c);

  void setValues(double a, double b, double c);

  void print();

  bool operator==(const Numbers& obj);
};