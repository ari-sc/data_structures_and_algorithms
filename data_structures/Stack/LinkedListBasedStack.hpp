//
// Created by ari on 7/4/23.
//

#include <LinkedList/LinkedList.hpp>



class LinkedListBasedStack
{
private:
    uint size_ = 0;
    
public:
    static LinkedList::Node* addNewNode(double value);
    
    LinkedList::Node* top = nullptr;
    
    double pop();
    
    void push(double value);
    
    [[nodiscard]] double peek() const;
    
    [[nodiscard]] bool isEmpty() const;
    
    [[nodiscard]] uint size() const;

};

