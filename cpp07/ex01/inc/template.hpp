#ifndef TEMPLATE_HPP_
#define TEMPLATE_HPP_

#include <iostream>

template<typename T>
void iter(T *array, size_t size, void (*func)(T &)) {
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

template<typename T>
void add(T &a){
	a += 45;
}

template<typename T>
void data(T &a){
	a = 45;
}


#endif // TEMPLATE_HPP_