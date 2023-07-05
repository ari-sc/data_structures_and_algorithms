//
// Created by ari on 7/5/23.
//

#include "ArrayBasedQueue.hpp"

void ArrayBasedQueue::enqueue(int value)
{
    if (isFull())
    {
        std::cerr << "Error: Queue is full" << std::endl;
        return;
    }
    
    rear_index_++;
    
    // If rear index reaches the end of the array, circle back around to the beginning
    if (rear_index_ == MAX_SIZE)
    {
        rear_index_ = 0;
    }
    
    array[rear_index_] = value;
    
}

int ArrayBasedQueue::dequeue()
{
    if (isEmpty())
    {
        std::cerr << "Error: Queue is empty" << std::endl;
        return -1;
    }
    
    int value = array[front_index_];
    array[front_index_] = 0;
    
    front_index_++;
    
    return value;
}

bool ArrayBasedQueue::isEmpty() const
{
    return (front_index_ == rear_index_) or rear_index_ == -1;
}

bool ArrayBasedQueue::isFull() const
{
    // The rear index circled back around to the front index
    return (front_index_ - rear_index_ == 1) and rear_index_ > -1;
}

uint ArrayBasedQueue::size() const
{
    return rear_index_;
}
