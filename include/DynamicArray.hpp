#ifndef DYNAMIC_ARRAY_HPP
#define DYNAMIC_ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include <utility>

template <typename T>
class DynamicArray {
private:
    T* array;
    size_t _capacity;
    size_t _currentSize;

    void resize(size_t newCapacity);

public:
    // DynamicArray();
    DynamicArray(size_t initCapacity = 2);
    ~DynamicArray();

    // // Prevent copying
    // DynamicArray(const DynamicArray&) = delete;
    // DynamicArray& operator=(const DynamicArray&) = delete;

    // // Move semantics
    // DynamicArray(DynamicArray&& other) noexcept;
    // DynamicArray& operator=(DynamicArray&& other) noexcept;

    void push_back(const T& element); // let compiler choose the copy constructor
    void push_back(T&& value); // let compiler choose the move constructor
    void pop_back();

    // T& at(size_t index);
    // const T& at(size_t index) const;

    T& operator [](size_t index);
    const T& operator [](size_t index) const;

    size_t getSize() const;
    size_t getCapacity() const;
    bool isEmpty() const;
    void clear();
};

#include "../src/containers/DynamicArray.tpp"

#endif // DYNAMIC_ARRAY_HPP