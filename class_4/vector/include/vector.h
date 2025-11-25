#pragma once

#include <cstddef>
#include <cstring>

class vector
{
  public:
    vector();
    vector(std::size_t size);
    ~vector();

    vector(const vector& other);
    vector& operator=(const vector& other);

  private:
    int* data_ = nullptr;
    std::size_t size_ = 0;
};