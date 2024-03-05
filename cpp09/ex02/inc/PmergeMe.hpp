#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_


#include <ctime>
#include <iostream>
#include <deque>
#include <vector>
#include <deque>

// Class declaration
class PmergeMe {
public:
	PmergeMe(); // Default constructor
	PmergeMe(const PmergeMe &other); // Copy constructor
	PmergeMe &operator=(const PmergeMe &rhs); // Copy assignment overload
	~PmergeMe(); // Default destructor
	void Parse(int ac, char **av);
	void PrintVector();
	void PrintDeque();
	void SortVector();
	void SortDeque();
	void StartFordJohnson();

private:
	std::vector<int> _vector;
	std::deque<int> _deque;
};



template<typename T>
void insertionSort(T &arr, int p, int q) {
for (int i = p; i < q; i++) {
	int tempVal = arr[i + 1];
	int j = i + 1;
	while (j > p && arr[j - 1] > tempVal) {
		arr[j] = arr[j - 1];
		j--;
	}
	arr[j] = tempVal;
}
for (int i = p; i <= q; i++) {
	std::cout << arr[i] << " ";
}
std::cout << std::endl;
}

template<typename T>
void merge(T& arr, int p, int q, int r) {
int n1 = q - p + 1;
int n2 = r - q;
T LA(n1), RA(n2);

std::copy(arr.begin() + p, arr.begin() + q + 1, LA.begin());
std::copy(arr.begin() + q + 1, arr.begin() + r + 1, RA.begin());

int RIDX = 0;
int LIDX = 0;
for (int i = p; i <= r; i++) {
	if (RIDX == n2) {
		arr[i] = LA[LIDX];
		LIDX++;
	} else if (LIDX == n1) {
		arr[i] = RA[RIDX];
		RIDX++;
	} else if (RA[RIDX] > LA[LIDX]) {
		arr[i] = LA[LIDX];
		LIDX++;
	} else {
		arr[i] = RA[RIDX];
		RIDX++;
	}
}
}

template<typename T>
void sort(T& arr, int p, int r) {
	int K = arr.size() / 2;
	if (r - p > K) {
		int q = (p + r) / 2;
		sort(arr, p, q);
		sort(arr, q + 1, r);
		merge(arr, p, q, r);
	} else {
		insertionSort(arr, p, r);
	}
}

#endif // PMERGEME_HPP_