#include <fstream>
#include <iostream>
#include "inc/colors.hpp"

void readFile(std::string filename, std::string &text){
	std::ifstream infile(filename);
	std::string line;
	if (infile.is_open()){
		while (getline(infile, line))
			text += line + "\n";
		text = text.substr(0, text.length() - 1);
	}else
		std::cerr << RED << "No permission or file not found" << RESET << std::endl;
	infile.close();
}

void writeFile(std::string filename, std::string &text){
	std::ofstream outfile(filename.append(".replace"));
	if (outfile.is_open())
		outfile << text;
	else
		std::cerr << RED << "file not found" << std::endl;
	outfile.close();
}

void changeText(std::string &text, std::string old_word, std::string replace_word){
	size_t pos = text.find(old_word);
	while (pos != std::string::npos) {
		text.erase(pos, old_word.length());
		text.insert(pos, replace_word);
		pos = text.find(old_word, pos + replace_word.length());
	}
}

int main(int ac, char **av){
	if (ac != 4)
		return (0);
	std::string text;
	std::string filename(av[1]);
	std::string old_word(av[2]);
	std::string replace_word(av[3]);
	readFile(filename, text);
	changeText(text, old_word, replace_word);
	writeFile(filename, text);
	return (0);
}