#ifndef QUEUE_CPP
#define QUEUE_CPP
/* ***************************************************************
*  Author : Ali Azhari   
*  Created On : Thu Jul 23 2026
*  File : LStack.cpp
*  Description: A queue implemented using an array is a linear 
*               data structure that follows the First-In, 
*               First-Out (FIFO) principle, where the first element 
*               inserted is the first one removed. 
*               The implementation uses a fixed-size array to store 
*               the elements and maintains front and rear 
*               indices to track the beginning and end of the queue. 
*               This approach provides efficient enqueue O(1) and 
*               dequeue O(n) time but has a fixed capacity,
*               meaning the queue cannot grow beyond the 
*               size of the allocated array without resizing or using
*               a circular queue implementation.
* *****************************************************************/

#include "QueueOverflow.cpp"
#include <ostream>
template <class T>
class Queue {
    private:
        T *arr;
        int rear;
        int capacity;
    
    public:
        Queue() : Queue(10) {}
        Queue(int capacity) {
            this->capacity = capacity;
            arr = new T[capacity];
            rear = -1;
        }
        ~Queue() {
            delete [] arr;
        }

        bool isEmpty() const { return rear == -1;}
        bool isFull() const { return rear == capacity - 1;}

        void enqueue(T item) {
            if (isFull()) 
                throw QueueOverflow("Can't enqueue - Queue is full");

            arr[++rear] = item;
        }

        // dequeue from the front of the queue
        // O(n) because we need to shift
        T dequeue() {
            if (isEmpty())
                throw QueueOverflow("Can't dequeue - Queue is empty");

            T item = arr[0];
            for (int i = 1; i < rear; i++)
               arr[i -1] = arr[i];
            rear--;
            return item;
        }

        T front() {
            if (isEmpty())
               throw QueueOverflow("Can't view the front - Queue is empty");

            return arr[0];
        }

        T last() {
            if (isEmpty())
               throw QueueOverflow("Can't view the last - Queue is empty");

            return arr[rear];

        }

        void display() {
            if (isEmpty())
                std::cout << "Queue is empty" << std::endl;
            else {
                for (int i = 0; i <= rear; i++)
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }


};
#endif
