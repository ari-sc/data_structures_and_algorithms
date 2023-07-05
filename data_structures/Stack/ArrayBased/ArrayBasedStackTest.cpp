//
// Created by ari on 7/4/23.
//

#include "ArrayBasedStack.hpp"

int main()
{
    ArrayBasedStack stack;
    
    stack.push(1);
    stack.push(2);
    stack.push(3);
    
    std::cout << stack.pop() << std::endl;
    
    stack.push(4);
    stack.push(5);
    
    std::cout << "Top of stack: " << stack.peek() << std::endl;
    
    std::cout << "Stack size: " << stack.size() << std::endl;
    
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    
    return EXIT_SUCCESS;
}