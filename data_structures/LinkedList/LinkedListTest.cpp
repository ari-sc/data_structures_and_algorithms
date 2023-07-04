//
// Created by ari on 7/4/23.
//

#include "LinkedList.hpp"


int main()
{
    auto head = new LinkedList::Node();
    auto one = new LinkedList::Node();
    auto two = new LinkedList::Node();
    auto three = new LinkedList::Node();
    
    head->value = 0;
    head->next = one;
    
    // Time complexity of inserting new node: O(1)
    one->value = 1;
    one->next = two;
    
    two->value = 2;
    two->next = three;
    
    three->value = 3;
    three->next = nullptr;
    
    
    // Time complexity of accessing value in linked list: O(n)
    while (head != nullptr)
    {
        std::cout << head->value << std::endl;
        head = head->next;
    }
    
    // Time complexity of deleting node: O(1)
    delete two;
    
    // Reallocate memory for head as it's currently nullptr
    head = new LinkedList::Node();
    
    // Reset head to point to the first node
    head->value = 0;
    head->next = one;
    
    // Set one to point to three
    one->next = three;
    
    std::cout << "Traverse the linked list once again after deleting two:" << std::endl;
    
    while (head != nullptr)
    {
        std::cout << head->value << std::endl;
        head = head->next;
    }
    
    delete head;
    delete one;
    delete three;
}