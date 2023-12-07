#include <cctype>
#include <iostream>

int	main(int ac, char **av)
{
	std::string str;

	(void)ac;
	for (int j = 1; av[j]; j++)
		for (int i = 0; av[j][i]; i++)
			str += std::toupper(av[j][i]);
	if (str.length() > 0)
		std::cout << str << std::endl;
	else 
		std::cout << "\033[1;31m * LOUD AND UNBEARABLE FEEDBACK NOISE *\033[0m" << std::endl;
	return (0);
}