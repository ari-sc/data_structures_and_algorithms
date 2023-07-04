//
// Created by ari on 7/4/23.
//


#include <cstdlib>
#include <iostream>

/* Advantages of array-based stack:
1. Random access in O(1) time
2. Easy to implement
3. Less memory overhead (no pointers are used)

Disadvantages of array-based stack:
1. Fixed size
2. Insertion is expensive if stack is full
3. Memory is not dynamically allocated (wasted memory if stack is not full) */



#define MAX_SIZE 100


class ArrayBasedStack
{
private:
    
    double array[MAX_SIZE] = {};
    
    int top_index_ = -1;

public:
    
    void push(double value);
    
    double pop();
    
    /**
     * Returns the value at the top of the stack without popping it
     */
    double peek();
    
    [[nodiscard]] bool isEmpty() const;
    
    [[nodiscard]] bool isFull() const;
    
    [[nodiscard]] uint size() const;
};


