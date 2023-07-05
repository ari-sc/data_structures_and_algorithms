//
// Created by ari on 7/5/23.
//

#include "LinkedList/LinkedList.hpp"

class LinkedListBasedQueue
{
public:
    
    LinkedList::Node* head_{}; // The head of the queue is the node which has been in the queue the longest time
    LinkedList::Node* tail_{}; // The tail of the queue is the most recent node to enter the queue
    
    void enqueue(double value);
    
    double dequeue();
    
    [[nodiscard]] bool isEmpty() const;
    
    [[nodiscard]] uint size() const;
    
private:
        
        uint size_{};
    
};
