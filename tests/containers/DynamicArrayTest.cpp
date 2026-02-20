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

    size_t arraySize = arr.getSize();

    std::cout << "Array Size is: " << arraySize << std::endl;
    std::cout << "Element one: " << arr[0] << std::endl;
    std::cout << "Array Capacity: " << arr.getCapacity() << std::endl;

    std::cout << "Initial array: ";
    for(size_t i = 0; i < arraySize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    arr.pop_back();
    std::cout << "Array after poping element: ";
    for(size_t i = 0; i < arraySize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Trying to access poped element: " << arr[arraySize] << std::endl; // Expected result: Memory out of bound error
}