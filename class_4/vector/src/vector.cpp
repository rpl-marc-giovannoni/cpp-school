#include "vector.h"
#include <iostream>

vector::vector()
{
    std::cout << "constructor\n";
}

vector::vector(std::size_t size) : data_(new int[size]()), size_(size)
{
    std::cout << "constructor\n";
}

vector::~vector()
{
    if (data_) {
        delete[] data_;
    }

    std::cout << "destructor\n";
}

vector::vector(const vector& other)
{
    size_ = other.size_;
    data_ = new int[size_];

    std::memcpy(data_, other.data_, size_ * sizeof(int));
    std::cout << "copy constructor\n";
}

vector& vector::operator=(const vector& other)
{
    if (this != &other) {
        if (data_) {
            delete[] data_;
        }

        size_ = other.size_;
        data_ = new int[size_];

        std::memcpy(data_, other.data_, size_ * sizeof(int));
    }
    std::cout << "copy assignment\n";
    return *this;
}