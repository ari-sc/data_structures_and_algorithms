//
// Created by ari on 7/4/23.
//

#include "LinkedList/LinkedList.hpp"


/* Advantages of  linked-list-based stack:
1. Memory is dynamically allocated (no wasted memory)
2. No size limitation

Disadvantages of array-based stack:
1. Stored in heap memory (slower access)
2. Accessing elements not at the top is O(n) time
3. Memory overhead. Each element requires a pointer */


class LinkedListBasedStack
{
private:
    uint size_{};
    
public:
    
    LinkedList::Node* top_ = nullptr;
    
    double pop();
    
    void push(double value);
    
    /**
    * Returns the value at the top of the stack without popping it
    */
    [[nodiscard]] double peek() const;
    
    [[nodiscard]] bool isEmpty() const;
    
    [[nodiscard]] uint size() const;

};

