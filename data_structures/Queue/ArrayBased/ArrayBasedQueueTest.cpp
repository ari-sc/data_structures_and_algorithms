//
// Created by ari on 7/5/23.
//


#include "ArrayBasedQueue.hpp"

int main()
{
    ArrayBasedQueue queue;
    
    std::cout << queue.dequeue() << std::endl;
    
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    
    std::cout << queue.dequeue() << std::endl;
    
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);
    
    std::cout << queue.dequeue() << std::endl;
    
    return EXIT_SUCCESS;
}