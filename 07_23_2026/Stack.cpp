#include "StackOverflow.cpp"
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
    Node<T> getNext() const { return next; }
    void setData(T data) { this->data = data; }
    void setNext(Node<T> next) { this->next = next; }
};

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

        bool isFull() {
            return top == capacity -1;
        }
        bool isEmpty() {
            return top == -1;
        }


};
