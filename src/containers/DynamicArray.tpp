#include <iostream>

template<typename T>
void DynamicArray<T>::resize(size_t newCapacity) {
    // creating a new array 
    T* newArray = new T[newCapacity];

    // allocating existing array values to new array
    for( size_t i = 0; i < DynamicArray::_currentSize; i++ ) {
        newArray[i] = DynamicArray::array[i];
    }

    // deleting existing array
    delete[] DynamicArray::array;
    DynamicArray:: array = newArray;
    DynamicArray::_capacity = newCapacity;
}

template<typename T>
DynamicArray<T>::DynamicArray(size_t initCapacity) : _currentSize(0), _capacity(initCapacity) {
    array = new T[initCapacity];
}

template<typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] array;
}

template<typename T>
T& DynamicArray<T>::operator [](size_t index) {
    // Element accessibility is guarded by the _currentSize
    if(index >= _currentSize) {
        throw std::out_of_range("Memory out of bound");
    }
    return array[index];
}

template<typename T>
const T& DynamicArray<T>::operator [](size_t index) const {
    // Element accessibility is guarded by the _currentSize
    if(index >= _currentSize) {
        throw std::out_of_range("Memory out of bound");
    }
    return array[index];
}

template<typename T>
void DynamicArray<T>::push_back(T&& element) {
    // if the array is full resize it to _currentSize * 2
    if(_currentSize == _capacity)
        resize(_currentSize*2);

    array[_currentSize++] = element;
}

template<typename T>
size_t DynamicArray<T>::getSize() const {
    return _currentSize;
}

template<typename T>
size_t DynamicArray<T>::getCapacity() const {
    return _capacity;
}

template<typename T>
void DynamicArray<T>::pop_back() {
    if(_currentSize == 0) {
        throw std::out_of_range("Memory out of bound");
    }

    // Conceptually, we reduce the size of the array
    // That element remains there, but not accessible(As accessibility is guarded by _currentSize in operator []) 
    --_currentSize;
}