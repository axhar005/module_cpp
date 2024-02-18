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
		std::cout << it->first << " : " <<  it->second << std::endl;
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
				// std::lower_bound();
			}
		}
	}catch(const std::exception &e){
		throw std::invalid_argument(e.what());
	}
	_file[0].close();
}

void BitcoinExchange::read(){
	_file[1].open(_path);
	if (!_file[2].is_open())
		throw std::invalid_argument(RED "error: specified path not found" RESET);
	
	try
	{
		getline(_file[1], _line);
		if (_line != "date | value")
			throw std::invalid_argument(RED "error: db file format is improperssss" RESET);

		while (getline(_file[1], _line)){
			_line = supchar(_line, ' ');
			std::istringstream iline(_line);
			if (!isdigit(_line[0]) || !isdigit(_line[_line.length() - 1]))
				throw std::invalid_argument(RED "error: db encountered bad date format or value" RESET);
			if (getline(iline, _date, '|') && getline(iline, _rateStr, '|')){
				std::istringstream(_rateStr) >> _rate;
				if (isdate(_date)){					
					std::map<std::string, double>::iterator it;
					it = _db.lower_bound(_date);
					it--;
					if (_rate < 0)
						std::cout <<RED "error: not a positive number" RESET << std::endl;
					else if (_rate == 0)
						std::cout <<RED "error: ad input => 2001-42-42" RESET << std::endl;
					else if (_rate > std::numeric_limits<double>::max())
						std::cout <<RED "error: too large a numbe" RESET << std::endl;
					else
						std::cout << _date << " => " << it->first << " => " << _rate << " = " << _rate * it->second << std::endl;
				}else{
					std::cout << RED "error: ad input => 2001-42-42" RESET << std::endl;
				}
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
	return true;
}

std::string supchar(const std::string &str, char c){
	std::string tmp;
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] != c)
			tmp += str[i];
	return (tmp);
}