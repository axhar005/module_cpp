#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include "colors.hpp"

// Class declaration
class BitcoinExchange {
public:
	BitcoinExchange(std::string path);
	BitcoinExchange(const BitcoinExchange &other); // Copy constructor
	BitcoinExchange &operator=(const BitcoinExchange &rhs); // Copy assignment overload
	~BitcoinExchange(); // Default destructor
	void read_db();
	void pars_db();
	void print_db();

private:
	BitcoinExchange(); // Default constructor
	std::map<std::string, double> _db;
	std::string _line;
	std::ifstream _file;
	std::string _date, _rateStr, _path;
	double _rate;
};

bool isdate(std::string str);

#endif // BITCOINEXCHANGE_HPP_