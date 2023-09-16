#pragma once

#include <memory>
#include <variant>

class Stack
{
  class Node
  {
  public:
    Node(int value, std::shared_ptr<Node> next = nullptr);

    int m_value;
    std::shared_ptr<Node> m_next;
  };
  
  std::shared_ptr<Node> m_node;
  size_t m_size;

  public:

  Stack();

  void push(int value);

  std::variant<int> pop();

  friend std::ostream& operator<<(std::ostream& out, Stack& obj);

};

std::ostream& operator<<(std::ostream& out, Stack& obj);