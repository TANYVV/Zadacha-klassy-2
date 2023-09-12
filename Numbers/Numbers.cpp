#include <iostream>
#include "Numbers.hpp"


Numbers::Numbers(double a, double b, double c)
    : m_a{a}
    , m_b{b}
    , m_c{c}
{}

void Numbers::setValues(double a, double b, double c)
{
    m_a = a;
    m_b = b;
    m_c = c;
}

void Numbers::print()
{
    std::cout<<"<"<<m_a<<" ,"<<m_b<<" ,"<<m_c<<">";
}

bool Numbers::operator==(const Numbers& obj)
{
    if (this == &obj) return true;

    return ((m_a == obj.m_a) && (m_b == obj.m_b) && (m_c == obj.m_c));
}