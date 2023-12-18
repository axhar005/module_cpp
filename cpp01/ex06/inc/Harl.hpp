#ifndef HARL_HPP_
#define HARL_HPP_

#include <iostream>
#define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
#define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
#define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR "This is unacceptable ! I want to speak to the manager now."

// Class declaration
class Harl {
	public:
		Harl(); //default constructor
		~Harl(); //destructor
		int complain(std::string level);
		void say(int i);

	private:
		typedef void (Harl::*Cmd)(void);
		Cmd _cmd[4];
		std::string _name[4];

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif // HARL_HPP_