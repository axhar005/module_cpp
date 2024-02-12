#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_
#include <iostream>


template <typename T>
int easyfind(T &container, int value){
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it != container.end())
		return std::distance(container.begin(), it);
	else
		throw std::runtime_error("The specified value was not located within the container");
}

#endif // EASYFIND_HPP_