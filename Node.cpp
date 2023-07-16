template <typename T>

class Node
{
public:
    T data;
    Node<T> *link;
    Node(T data)
    {
        this->data = data;
        this->link = NULL;
    }
};