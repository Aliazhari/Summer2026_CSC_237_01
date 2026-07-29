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