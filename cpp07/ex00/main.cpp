#include "inc/template.hpp"

int main(void){
	int x = 32;
	int y = 2;
	std::cout << x << " : " << y << "\n";
	swap(x, y);
	std::cout << x << " : " << y << "\n";
	return (0);
}