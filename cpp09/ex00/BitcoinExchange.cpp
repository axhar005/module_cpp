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

void BitcoinExchange::print_db(){
	std::map<std::string, double>::iterator it;
	for (it = _db.begin(); it != _db.end(); it++){
		std::cout << it->first << " : " <<  it->second << std::endl;
	}
}

void BitcoinExchange::pars_db() {
	std::map<std::string, double>::iterator it;
	for (it = _db.begin(); it != _db.end(); it++){
		if (!isdate(it->first))
			throw std::invalid_argument(RED "error: db date format" RESET);
	}
}

void BitcoinExchange::read_db() {

	_file.open(_path);

	if (!_file.is_open())
		throw std::invalid_argument(RED "error: db specified path not found" RESET);
	try{
		getline(_file, _line);
		if (_line != "date,exchange_rate")
			throw std::invalid_argument(RED "error: db file format is improper" RESET);
		while (getline(_file, _line)){
			std::istringstream iline(_line);
			if (!isdigit(_line[0]) || !isdigit(_line[_line.length() - 1]))
				throw std::invalid_argument(RED "error: db encountered bad date format or value" RESET);
			if (getline(iline, _date, ',') && getline(iline, _rateStr, ',')){
				std::istringstream(_rateStr) >> _rate;
				_db[_date] = _rate;
			}
		}
	}catch(const std::exception &e){
		throw std::invalid_argument(e.what());
	}
	_file.close();
}



bool isdate(std::string str){
	if (str[4] != '-' || str[7] != '-' || str.length() != 10)
		return (false);
	for (size_t i = 0; i < str.length(); i++){
		if (!isdigit(str[i]) && str[i] != '-')
			return (false);
	}
	return true;
}