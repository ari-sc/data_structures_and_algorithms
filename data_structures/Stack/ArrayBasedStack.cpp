//
// Created by ari on 7/4/23.
//

#include "ArrayBasedStack.hpp"


void ArrayBasedStack::push(double value)
{
    if (isFull())
    {
        std::cerr << "Error: Stack overflow" << std::endl;
        return;
    }
    
    array[++top_index_] = value;
}

double ArrayBasedStack::pop()
{
    if (isEmpty())
    {
        std::cerr << "Error: Stack underflow" << std::endl;
        return 0;
    }
    
    return array[top_index_--];
}

double ArrayBasedStack::peek()
{
    if (isEmpty())
    {
        std::cerr << "Error: Stack is empty" << std::endl;
        return 0;
    }
    
    return array[top_index_];
}

bool ArrayBasedStack::isEmpty() const
{
    return top_index_ == -1;
}

bool ArrayBasedStack::isFull() const
{
    return top_index_ == (MAX_SIZE - 1);
}

uint ArrayBasedStack::size() const
{
    return top_index_ + 1;
}