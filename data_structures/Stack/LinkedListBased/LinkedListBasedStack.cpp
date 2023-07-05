//
// Created by ari on 7/4/23.
//

#include "LinkedListBasedStack.hpp"


// Time complexity: O(1)
double LinkedListBasedStack::pop()
{
    if (isEmpty())
    {
        std::cerr << "Error: Stack underflow" << std::endl;
    }
    
    double value = top_->value;
    
    LinkedList::Node* temp = top_;
    
    top_ = top_->next;
    
    delete temp;
    
    size_--;
    
    return value;
}

// Time complexity: O(1)
void LinkedListBasedStack::push(double value)
{
    auto new_node = new LinkedList::Node();
    
    new_node->value = value;
    new_node->next = top_;
    
    top_ = new_node;
    
    size_++;
}

// Time complexity: O(1)
double LinkedListBasedStack::peek() const
{
    return top_->value;
}

bool LinkedListBasedStack::isEmpty() const
{
    return top_ == nullptr;
}

uint LinkedListBasedStack::size() const
{
    return size_;
}
