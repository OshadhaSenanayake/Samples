#ifndef SINGLY_LINKED_LIST_HPP
#define SINGLY_LINKED_LIST_HPP

#include "./Node.hpp"

template <typename T>
class SinglyLinkedList{
    private:
        Node<T>* _head;
        size_t size;

    public:
        SinglyLinkedList(Node<T>* newHead = nullptr);
        Node<T>* getHead() const;
        void insertFront(Node<T>* newNode);
        void insertBack(Node<T>* newNode);
        void printValues();
        // void deleteByValue(T value);
        // void deleteByIndex(size_t index);
};

#include "../../src/containers/linkedList/SinglyLinkedList.tpp"

#endif