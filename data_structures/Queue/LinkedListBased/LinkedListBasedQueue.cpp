//
// Created by ari on 7/5/23.
//

#include "LinkedListBasedQueue.hpp"

void LinkedListBasedQueue::enqueue(double value)
{
    auto new_node = new LinkedList::Node();
    
    new_node->value = value;
    new_node->next = nullptr;
    
    if (not isEmpty())
    {
        tail_->next = new_node; // The current tail of the queue points to the new node
    }
    
    else
    {
        head_ = new_node; // If the queue is empty, the new node is both the head and the tail
    }
    
    tail_ = new_node;
    
    size_++;
}

double LinkedListBasedQueue::dequeue()
{
    if (isEmpty())
    {
        std::cerr << "Error: Queue underflow" << std::endl;
        return -1;
    }
    
    double value = head_->value;
    
    auto temp = head_;
    
    head_ = head_->next;
    
    delete temp;
    
    size_--;
    
    return value;
}

bool LinkedListBasedQueue::isEmpty() const
{
    return head_ == nullptr;
}

uint LinkedListBasedQueue::size() const
{
    return size_;
}
