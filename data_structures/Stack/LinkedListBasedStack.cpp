//
// Created by ari on 7/4/23.
//

#include "LinkedListBasedStack.hpp"



LinkedList::Node* LinkedListBasedStack::addNewNode(double value)
{
    auto newNode = new LinkedList::Node();
    newNode->value = value;
    newNode->next = nullptr;
    
    return newNode;
}

double LinkedListBasedStack::pop()
{
    if (isEmpty())
    {
        std::cerr << "Error: Stack underflow" << std::endl;
    }
    
    double value = top->value;
    
    top = top->next;
    
    delete top;
    
    size_--;
    
    return value;
}

void LinkedListBasedStack::push(double value)
{
    LinkedList::Node* new_node = addNewNode(value);
    
    if (not isEmpty())
    {
        top->next = new_node;
    }
    
    top = new_node;
    
    size_++;
}

double LinkedListBasedStack::peek() const
{
    return top->value;
}

bool LinkedListBasedStack::isEmpty() const
{
    return top == nullptr;
}

uint LinkedListBasedStack::size() const
{
    return size_;
}
