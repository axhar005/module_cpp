#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

// Class declaration
class BitcoinExchange {
public:
	BitcoinExchange(std::string path);
	BitcoinExchange(const BitcoinExchange &other); // Copy constructor
	BitcoinExchange &operator=(const BitcoinExchange &rhs); // Copy assignment overload
	~BitcoinExchange(); // Default destructor
	void read_db();
	void pars();

private:
	BitcoinExchange(); // Default constructor
	std::map<std::string, double> _db;
	std::string _line;
	std::ifstream _file;
	std::istringstream _iline;
	std::string _date, _rateStr, _path;
	double _rate;
};

#endif // BITCOINEXCHANGE_HPP_