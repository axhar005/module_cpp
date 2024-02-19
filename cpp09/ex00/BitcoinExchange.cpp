#include "inc/BitcoinExchange.hpp"

// Default constructor
BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(std::string path) :  _db_path("data.csv"), _path(path){
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
		std::cout << std::fixed << std::setprecision(2) << it->first << " : " <<  it->second << std::endl;
	}
}

void BitcoinExchange::pars_db() {
	std::map<std::string, double>::iterator it;
	for (it = _db.begin(); it != _db.end(); it++){
		if (!isdate(it->first))
			throw std::invalid_argument(RED "error: db encountered bad date format or value" RESET);
	}
}

void BitcoinExchange::read_db() {

	_file[0].open(_db_path);
	if (!_file[0].is_open())
		throw std::invalid_argument(RED "error: db specified path not found" RESET);
	
	try{
		getline(_file[0], _line);
		if (_line != "date,exchange_rate")
			throw std::invalid_argument(RED "error: db file format is improper" RESET);
		while (getline(_file[0], _line)){
			_line = supchar(_line, ' ');
			std::istringstream iline(_line);
			if (getline(iline, _date, ',') && getline(iline, _rateStr, ',')){
				std::istringstream(_rateStr) >> _rate;
				if (_date.length() >= 10)
					_db[_date] = _rate;
				else
					throw std::invalid_argument(RED "error: db encountered bad date format or value" RESET);
			}
		}
	}catch(const std::exception &e){
		throw std::invalid_argument(e.what());
	}
	_file[0].close();
}

void BitcoinExchange::calcul(){
	_file[1].open(_path);
	if (!_file[1].is_open())
		throw std::invalid_argument(RED "error: specified path not found" RESET);
	try{
		getline(_file[1], _line);
		if (_line != "date | value")
			throw std::invalid_argument(RED "error: file format is impropers" RESET);

		while (getline(_file[1], _line)){
			
			_line = supchar(_line, ' ');
			std::istringstream iline(_line);
			if (getline(iline, _date, '|') && getline(iline, _rateStr, '|')){
				std::istringstream(_rateStr) >> _rate;
				if (isdate(_date)){
					std::map<std::string, double>::iterator it;
					it = _db.lower_bound(_date);
					if (it != _db.begin() && _date != it->first)
						it--;
					if (_rateStr != "0" && _rate == 0)
						std::cout << RED "error: invalid value format => " << _rateStr << RESET << std::endl;
					else if (_rate < 0)
						std::cout <<RED "error: not a positive number" RESET << std::endl;
					else if (_rate > std::numeric_limits<int>::max())
						std::cout << RED "error: value too large => " << _rateStr << RESET << std::endl;
					else
						std::cout << std::fixed << std::setprecision(2) << _date << " => " << it->first << " => " << _rate << " = " << _rate * it->second << std::endl;
				}else
					std::cout << RED "error: invalid date format => " << _date << RESET << std::endl;;
			}else{
				std::cout << RED "error: bad input => " << _line << RESET << std::endl;
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}

bool isdate(std::string str){
	if (str[4] != '-' || str[7] != '-' || str.length() != 10)
		return (false);
	for (size_t i = 0; i < str.length(); i++){
		if (!isdigit(str[i]) && str[i] != '-')
			return (false);
	}
	if (std::stoi(str.substr(5, 2)) > 12)
		return (false);
	if (std::stoi(str.substr(8, 2)) > 31)
		return (false);
	return true;
}

std::string supchar(const std::string &str, char c){
	std::string tmp;
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] != c)
			tmp += str[i];
	return (tmp);
}

bool str_isdigit(const std::string &str){
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) {
			return (false);
		}
	}
	return (true);
}

int char_count(const std::string &str, char c){
	int count = 0;
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] == c)
			count++;
	return (count);
}
