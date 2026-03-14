#include <iostream>
#include "singlyLinkedList.hpp"
#include "Node.hpp"

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(Node<T>* newHead): _head(newHead){
}

template<typename T>
Node<T>* SinglyLinkedList<T>::getHead() const {
    return _head;
}

template<typename T>
void SinglyLinkedList<T>::insertFront(Node<T>* newNode) {
    if(_head != nullptr){
        newNode->setNextNode(_head);
        _head = newNode;
    }
}

template<typename T>
void SinglyLinkedList<T>::insertBack(Node<T>* newNode) {
    if(_head->getNextNode() == nullptr) {
        _head->setNextNode(newNode);
    } else {
        Node<T>* currentLastNode = _head;
        while(currentLastNode -> getNextNode() != nullptr) {
            currentLastNode = currentLastNode -> getNextNode();
        }
        currentLastNode -> setNextNode(newNode);
    }
}

template<typename T>
void SinglyLinkedList<T>::printValues() {
    if(getHead() == nullptr) {
        std::cout << "List is empty!" << std::endl;
        return;
    }

    Node<T>* currentNode = getHead();
    while(currentNode != nullptr) {
        std::cout << currentNode->getData() << " ";
        currentNode = currentNode->getNextNode();
    };
    std::cout << std::endl;

}