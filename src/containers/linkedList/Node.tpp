#include <iostream>
#include "Node.hpp"

template<typename T>
Node<T>::Node(T newData, Node<T>* newNextNode) : _data(newData), _nextNode(newNextNode){
}

template<typename T>
Node<T>::~Node() = default;

template<typename T>
T Node<T>::getData() {
    return _data;
}

template<typename T>
Node<T>* Node<T>::getNextNode() {
    return _nextNode;
}

template<typename T>
void Node<T>::setNextNode(Node<T>* newNode) {
    _nextNode = newNode;
}