#include "Stack.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& out, Stack& obj);

Stack::Stack()
  : m_size {0}
  , m_node{nullptr}
{}

Stack::Node::Node(int value, std::shared_ptr<Node> next)
: m_value{value}
, m_next{next}
{}

void Stack::push(int value)
{
  auto newNode = std::make_shared<Node>(value, m_node);
  m_node = newNode;
  m_size++;
}

std::variant<int> Stack::pop()
{
  if (m_node)
  {
    int returnValue = m_node->m_value;
    m_node = m_node->m_next;
    m_size--;
  }
  return {};
}

std::ostream& operator<<(std::ostream& out, Stack& obj)
{
  auto current = obj.m_node; 
  while(current)
  {
    out << current->m_value << " ";
    current = current->m_next;
  }
  return out;
}
