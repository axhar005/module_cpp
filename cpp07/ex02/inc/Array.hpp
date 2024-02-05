// #ifndef ARRAY_HPP_
// #define ARRAY_HPP_
#pragma once
#include <iostream>
template <typename T>
class Array {
public:
	Array<T>(); // Default constructor
	Array(unsigned int n);
	Array<T>(const Array &other); // Copy constructor
	Array<T> &operator=(const Array &rhs); // Copy assignment overload
	~Array<T>(); // Default destructor
	T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;
	unsigned int size() const;

private:
	T *_array;
	unsigned int _size;

};

#include "Array.tpp"
// #endif // ARRAY_HPP_