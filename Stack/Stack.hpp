#pragma once

#include <memory>

class Stack
{
  class Node
  {
    int m_value;
    std::unique_ptr<Node> next;

   public:
   
    Node(int value, std::unique_ptr<Node> next = nullptr);
    
    int getValue();

    void setValue(int value);
  };
  
  std::unique_ptr<Node> m_node;

  public:

  Stack();

  void push(int value);

  int pop();

  friend std::ostream& operator<<(std::ostream& out, Stack& obj);

};

std::ostream& operator<<(std::ostream& out, Stack& obj);