#include <iostream>
#include "Stack/Stack.hpp"

int main()
{
    Stack stack;

    stack.push(9);
    stack.push(8);

    std::cout << stack << std::endl;

    stack.pop();

    std::cout << stack << std::endl;
}