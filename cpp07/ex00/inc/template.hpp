#ifndef TEMPLATE_HPP_
#define TEMPLATE_HPP_
#include <iostream>

template<typename T>
void swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T min(T &x, T &y) {
	if (x > y)
		return y;
	else if (y > x)
		return x;
	else
		return y;
}

template<typename T>
T max(T &x, T &y) {
	if (x > y)
		return x;
	else if (y > x)
		return y;
	else
		return y;
}


#endif // TEMPLATE_HPP_