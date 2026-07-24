#ifndef LSTACK_CPP
#define LSTACK_CPP
/* ***************************************************************
*  Author : Ali Azhari   
*  Created On : Thu Jul 23 2026
*  File : LStack.cpp
*  Description: A stack implemented using a linked list is a dynamic 
*               data structure that follows the Last-In, 
*               First-Out (LIFO) principle. Each element is 
*               stored in a node containing the data and a pointer 
*               to the next node. The top of the stack is represented 
*               by the head of the linked list, allowing push and 
*               pop operations to be performed efficiently in O(1) time 
*               without the fixed-size limitation of an array. 
*               Since memory is allocated dynamically, 
*               the stack can grow and shrink as needed, 
*               limited only by the available system memory.
* *****************************************************************/
#include <iostream>
#include "Node.cpp"
#include "StackOverflow.cpp"
template<class T>
class LStack  {
    private:
        Node<T> *top;
        int size; // Keep track of how many elements in the stack
    public:
        LStack() {
            size = 0;
            top = nullptr;
        }

        void push(T item) {
            Node<T> *newNode = new Node<T>(item);
            newNode->setNext(top);
            top = newNode;
            size++;
        }

        T pop() {
            // check if empty 
            if(isEmpty())
               throw StackOverflow("Can't pop - StackOverflow");
            
            Node<T> *temp = top;
            T item = temp->getData();
            top = top->getNext();
            temp->setNext(nullptr);
            size--;
            delete temp;
            return item;
        }

        bool isEmpty() {
            // You can also return top == nullptr
            return size == 0;
        }
        // Print the stack 
        void display() {
            if (isEmpty())
                std::cout << "Stack is empty." << std::endl;
            else {
                Node<T>* walker = top;
                while(walker != nullptr) {
                    std::cout << walker->getData() << std::endl;
                    walker = walker->getNext();
                }
            }
        }

};
#endif