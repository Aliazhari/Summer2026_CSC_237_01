#ifndef LQUEUE_CPP
#define LQUEUE_CPP
/* ***************************************************************
*  Author : Ali Azhari   
*  Created On : Thu Jul 24 2026
*  File : LQueue.cpp
*  Description: A queue implemented using an LinkedList is a linear 
*               data structure that follows the First-In, 
*               First-Out (FIFO) principle, where the first element 
*               inserted is the first one removed. 
*               Queue implementation using a singly linked list with 
*               dynamic memory allocation and exception handling.
* *****************************************************************/

#include "QueueException.cpp"
#include <ostream>
template <class T>
class LQueue {
    private:
    Node<T> *front;
    Node<T> *rear;
    int size;

    public:
    LQueue() {
        front = rear = nullptr;
        size = 0;
    }

    bool isEmpty() { return size == 0; }

    void enqueue(T data) {
        Node<T> *newNode = new Node(data);
        if(isEmpty()) {
            front = rear = newNode;
        }
        else {
         rear->setNext(newNode);
         rear = newNode;
        }
        size++;
    }

    T dequeu() {

        if (isEmpty()) throw QueueException("Can't dequeue - Queue is empty");

        Node<T> *temp = front;
        T value = temp->getData();
        front = fron->getNext();
        if (size == 1) queue = front;
        size--;
        delete temp;
        return value;
    }

    void display() {
        if (isEmpty) 
            std::cout << "List is empty" << std::endl;
        else {
            Node<T> *walker = front;
            while(walker != nullptr) {
                std::cout << walker->getData() << std::endl;
                walker = walker->getNext();
            }
        }
    }


};
#endif