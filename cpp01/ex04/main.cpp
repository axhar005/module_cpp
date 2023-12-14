#include <fstream>
#include <iostream>
#include "inc/colors.hpp"
std::string av_to_string(char *a){
	std::string str;

	for (int i = 0; a[i]; i++)
		str += std::toupper(a[i]);
	return (str);
}

int main(int ac, char **av){
	
	if (ac <= 1)
		return (0);
	std::string text;
	std::string line;
	std::ifstream infile(av_to_string(av[1]));
	
	// read file
	if (infile.is_open()){
		while (getline(infile, line)) {
			text += line + "\n";
		}
		text = text.substr(0, text.length() - 1);
	}else{
		std::cout << RED << "No permission or file not found" << RESET << std::endl;
	}

	// change text
	int start = 0;
	while (text.find(av[2], start)) {
	
	}


	// write new file

	return (0);
}