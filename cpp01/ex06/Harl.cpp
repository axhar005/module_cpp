#include "inc/Harl.hpp"
#include "inc/colors.hpp"
#include <iostream>

// Default constructor
Harl::Harl() {
	_cmd[0] = &Harl::debug;
	_cmd[1] = &Harl::info;
	_cmd[2] = &Harl::warning;
	_cmd[3] = &Harl::error;
	_name[0] = "DEBUG";
	_name[1] = "INFO";
	_name[2] = "WARNING";
	_name[3] = "ERROR";
	return;
}

// Default destructor
Harl::~Harl() {
	return;
}

void Harl::debug(void){
	std::cout << CYAN << DEBUG << RESET << std::endl;
}

void Harl::info(void){
	std::cout << YELLOW << INFO << RESET << std::endl;
}

void Harl::warning(void){
	std::cout << BLUE << WARNING << RESET << std::endl;
}

void Harl::error(void){
	std::cout << MAGENTA << ERROR << RESET << std::endl;
}

int Harl::complain(std::string level){
	for (int i = 0; i < 4; i++) {
		if (level.compare(_name[i]) == 0){
			std::cout << GREEN << "[ " << _name[i] << " ]" << RESET << std::endl;
			return (i);
		}
	}
	return (-1);
}

void Harl::say(int i){
	(this->*_cmd[i])();
	return;
}