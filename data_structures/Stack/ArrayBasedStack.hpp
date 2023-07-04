//
// Created by ari on 7/4/23.
//


#include <cstdlib>
#include <iostream>

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


