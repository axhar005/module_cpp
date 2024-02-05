// Default constructor
template <typename T>
Array<T>::Array() : _array(NULL), _size(0){
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
		_array = new T[n];
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array &other) {
	*this = other;
}

// Copy assignment overload
template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs) {
	if (this != &rhs){
		delete [] _array;
		_size = rhs._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return *this;
}

// Default destructor
template <typename T>
Array<T>::~Array() {
	delete [] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index){
	if (index > _size)
		throw std::out_of_range("Index out of bounds");
	else
		return (_array[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const{
	if (index > _size)
		throw std::out_of_range("Index out of bounds");
	else
		return (_array[index]);
}

template <typename T>
unsigned int Array<T>::size() const{
	return (_size);
}