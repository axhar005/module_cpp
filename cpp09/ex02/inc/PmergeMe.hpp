#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_


#include <ctime>
#include <vector>
#include <list>

// Class declaration
class PmergeMe {
public:
	PmergeMe(); // Default constructor
	PmergeMe(const PmergeMe &other); // Copy constructor
	PmergeMe &operator=(const PmergeMe &rhs); // Copy assignment overload
	~PmergeMe(); // Default destructor
	void Parse(int ac, char **av);
	void PrintVector();
	void PrintList();
	void Time(std::clock_t start, std::clock_t end);

private:
	std::vector<unsigned int> _vector;
	std::list<unsigned int> _list;
};

#endif // PMERGEME_HPP_