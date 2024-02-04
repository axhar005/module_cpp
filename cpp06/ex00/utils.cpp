#include <iostream>

int char_count(const std::string &str, char c){
	int count = 0;
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] == c)
			count++;
	return (count);
}

bool str_isdigit(const std::string &str){
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) {
			return (false);
		}
	}
	return (true);
}

bool str_ischar(const std::string &str){
	if (!str_isdigit(str))
		return (false);
	if (std::stoi(str) > 32 && std::stoi(str) < 127)
		return (true);
	return (false);
}

bool str_isint(const std::string &str){
	if (str[0] == '-'){
		if (!str_isdigit(str.substr(1, str.back())))
			return (false);
	}else if (!str_isdigit(str))
		return (false);
	return true;
}

bool str_isfloat(const std::string &str){
	if (char_count(str, '-') > 1 || char_count(str, '.') != 1 || char_count(str, 'f') != 1)
		return (false);
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-' && str[i] != 'f') {
			return (false);
		}
	}
	return (true);
}
