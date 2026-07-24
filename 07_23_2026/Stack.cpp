#ifndef STACK_CPP
#define STACK_CPP
#include "StackOverflow.cpp"
#include <ostream>
template <class T>
class Stack {

    private:
        T *elements;
        int top;
        int capacity;

    public:
        Stack() : Stack(10) {}
        Stack(int capacity) {
            this->capacity = capacity;
            top = -1;
            elements = new T[capacity];
        }

        ~Stack() {
            delete [] elements;
        }

        void push(T item) {
            if(isFull()) throw StackOverflow("Can't push - Stackoverflow");
            elements[++top] = item;
        }

        T pop() {
            if(isEmpty()) throw StackOverflow("Can't pop - Stackoverflow");
            return elements[top--];
        }

        bool isFull() {
            return top == capacity -1;
        }
        bool isEmpty() {
            return top == -1;
        }
        int getTop()const { return top;}

        std::string toString() {
            std::string msg = "[";
            if (isEmpty()) 
                msg = "List is empty";
            else {
                for (int i= 0; i <= top; i++) {
                    msg = msg + " " + std::to_string(elements[i]);
                }
            }
            msg += "]";
            return msg;
            
        }

};
#endif
