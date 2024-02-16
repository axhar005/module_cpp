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
	void read();

private:
	BitcoinExchange(); // Default constructor
	std::map<std::string, double> _db;
	std::ifstream _file[2];
	std::string _date, _rateStr, _line, _db_path, _path;
	double _rate;
};

bool isdate(std::string str);
std::string supchar(const std::string &str, char c);

#endif // BITCOINEXCHANGE_HPP_