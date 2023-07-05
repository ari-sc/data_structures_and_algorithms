//
// Created by ari on 7/5/23.
//

#include <iostream>


#define MAX_SIZE 4

class ArrayBasedQueue
{
private:
    int array[MAX_SIZE] = {};
    
    int front_index_{}; // Index of the front element (the element which has been in the queue the longest)
    int rear_index_ = -1; // Index of the rear element (the most recent element to enter the queue)

public:
    void enqueue(int value);
    
    int dequeue();
    
    [[nodiscard]] bool isEmpty() const;
    
    [[nodiscard]] bool isFull() const;
    
    uint size() const;
};


