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