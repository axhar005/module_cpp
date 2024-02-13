#include "inc/BitcoinExchange.hpp"

// Default constructor
BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(std::string path) : _path(path){
}

// Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	*this = other;
	return;
}

// Copy assignment overload
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
BitcoinExchange::~BitcoinExchange() {
}

void BitcoinExchange::pars() {
}

void BitcoinExchange::read_db() {

	_file.open(_path);

	if (!_file.is_open()){
		std::cout << "error: specified path not found" << std::endl;
		return;
	}
	try{
		getline(_file, _line);
		if (_line != "date,exchange_rate"){
			std::cout << "error: file format is improper" << std::endl;
			return;
		}
		while (getline(_file, _line)){
			if (!isdigit(_line[0]) || !isdigit(_line[_line.length() - 1])){
				std::cout << "error: encountered bad date format or value" << std::endl;
				return;
			}
			if (getline(_iline, _date, ',') && getline(_iline, _rateStr, ',')){
				std::istringstream(_rateStr) >> _rate;
				_db[_date] = _rate;
			}
		}
	}catch(const std::exception &e){
		std::cout << e.what() << std::endl;
		return;
	}
	_file.close();

}

