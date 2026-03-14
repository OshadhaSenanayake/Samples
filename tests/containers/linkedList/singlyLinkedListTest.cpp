#include <iostream>
#include "SinglyLinkedList.hpp"
#include "Node.hpp"

int main(){
    Node<int> firstNode(1, nullptr);
    Node<int> secondNode(2, nullptr);
    Node<int> thirdNode(3, nullptr);
    Node<int> fourthNode(4, nullptr);
    Node<int> fifthNode(5, nullptr);


    SinglyLinkedList<int> list;
    list.printValues(); // output: "List is empty"

    SinglyLinkedList<int> list2(&firstNode);

    list2.insertFront(&secondNode);
    list2.insertFront(&thirdNode);
    list2.insertBack(&fourthNode);
    list2.insertFront(&fifthNode);

    // std::cout << list2.getHead()->getNextNode() ->getNextNode() -> getData() << std::endl;
    list2.printValues(); // output: 5 3 2 1 4

}