#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack() : std::stack<T> (){}; 
	MutantStack(const MutantStack &other) : std::stack<T> (other){};
	MutantStack &operator=(const MutantStack &rhs){
		*this = std::stack<T>::operator=(rhs);
		return *this;
	}
	~MutantStack(){};
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (std::stack<T>::c.begin()); };
	iterator end() { return (std::stack<T>::c.end()); };
};

#endif // MUTANTSTACK_HPP_