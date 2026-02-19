#include <iostream>
#include "../../include/DynamicArray.hpp"

int main() {
    DynamicArray<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(34);
    arr.push_back(54);
    arr.push_back(67);

    std::cout << "Array Size is: " << arr.getSize() << std::endl;
    std::cout << "Element one: " << arr[0] << std::endl;

    for(size_t i = 0; i < arr.getSize(); i++) {
        std::cout << arr[i] << std::endl;
    }
}