#include "inc/Point.hpp"
#include "inc/colors.hpp"
#include <iostream>


// #include <cstdlib>
// #include <ctime>
// // Initialise le générateur de nombres aléatoires
// void initializeRandom() {
// 	std::srand(static_cast<unsigned int>(std::time(0)));
// }

// // Retourne un nombre aléatoire de type double entre min et max
// double randomDouble(double min, double max) {
// 	double fraction = static_cast<double>(rand()) / RAND_MAX;
// 	return min + fraction * (max - min);
// }

void print (Point const &a, Point const &b, Point const &c, Point const &p){
	if (bsp(a, b, c, p))
		std::cout << GREEN << "TRUE" << RESET << std::endl;
	else
		std::cout << RED << "FALSE" << RESET << std::endl;
}

void triangle(Point a, Point b, Point c, Point p){
	print(a, b, c, p);
}

int main( void ) {

	// Premier triangle
	triangle(Point(0.0, 0.0), Point(5.0, 0.0), Point(2.0, 4.0), Point(2.0, 1.0));

	// Deuxième triangle
	triangle(Point(0.0, 0.0), Point(10.0, 0.0), Point(10.0, 0.0), Point(0.0, 1.0));

	// Troisième triangle
	triangle(Point(0.5, 0.6), Point(5.0, 0.24), Point(2.24, 3.5), Point(2.0, 1.0));

	// initializeRandom();
	// triangle(Point(0.0, 0.0), Point(5.0, 0.0), Point(2.0, 4.0), Point(randomDouble(0.0, 10.0), randomDouble(0.0, 10.0)));

	return 0;
}