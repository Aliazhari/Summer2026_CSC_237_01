#ifndef NODE_CPP
#define NODE_CPP
/* ***************************************************************
*  Author : Ali Azhari   
*  Created On : Thu Jul 23 2026
*  File : Node.cpp
*  Description: Node.cpp contains the implementation of 
*               the Node class used by the linked-list-based queue. 
*               It defines the node constructor, which initializes 
*               the node's data and sets the pointer to the next node. 
*               Each node represents a single element in the queue 
*               and is dynamically allocated as elements are engueued 
*               onto the queue.
* *****************************************************************/
template <class T>
class Node {
    private:
    T data;
    Node<T> *next;

    private:
    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
    // Getters
    T getData() const { return data; }
    Node<T> getNext() const { return next; }

    // Setters
    void setData(T data) { this->data = data; }
    void setNext(Node<T> next) { this->next = next; }
};
#endif