#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node{
    private:
        T _data;
        Node<T>* _nextNode;

    public:
        Node(T newData, Node<T>* newNextNode);
        ~Node();
        T getData();
        Node<T>* getNextNode();
        void setNextNode(Node<T>* newNode);

};

#include "../../src/containers/linkedList/Node.tpp"

#endif