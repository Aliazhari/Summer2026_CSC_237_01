#ifndef NODE_CPP
#define NODE_CPP
/* ***************************************************************
*  Author : Ali Azhari   
*  Created On : Thu Jul 23 2026
*  File : Node.cpp
*  Description: Node.cpp contains the implementation of 
*               the Node class used by the linked-list-based stack. 
*               It defines the node constructor, which initializes 
*               the node's data and sets the pointer to the next node. 
*               Each node represents a single element in the stack 
*               and is dynamically allocated as elements are pushed 
*               onto the stack.
* *****************************************************************/

template <class T>
class Node {
    private:
        T data;
        Node<T> *next;

    public:
        Node(T data)
        {
            this->data = data;
            next = nullptr;
        }
        T getData() const { return data; }
        Node<T>* getNext() const { return next; }
        void setData(T data) { this->data = data; }
        void setNext(Node<T> *next) { this->next = next; }
};
#endif