#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include "inc/BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Use: " << av[0] << " <path>" << std::endl;
		return (0);
	}
	BitcoinExchange a("data.csv");
	a.read();


	return 0;
}
// std::ifstream file(av[1]);
// 	std::map<std::string, double> db;
// 	std::string line;

// 	if (!file.is_open()){
// 		std::cout << "path not found" << std::endl;
// 		return (0);
// 	}

// 	try{
// 		getline(file, line);
// 		if (line != "date,exchange_rate"){
// 			std::cout << "file not good" << std::endl;
// 			return (0);
// 		}

// 		while (getline(file, line)){
// 			if (!isdigit(line[0]) || !isdigit(line[line.length() - 1])){
// 				std::cout << "bad value" << std::endl;
// 				return (0);
// 			}

// 			std::istringstream tmp(line);
// 			std::string date, rateStr;
// 			double rate;

// 			if (getline(tmp, date, ',') && getline(tmp, rateStr, ',')){
// 				std::cout << "test: " << date << " : " << rateStr << std::endl;
// 				std::istringstream(rateStr) >> rate;
// 				db[date] = rate;
// 			}
// 		}
// 	}catch(const std::exception &e){
// 		std::cout << e.what() << std::endl;
// 		return 0;
// 	}
// 	file.close();