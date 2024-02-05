#include "inc/template.hpp"
#include "inc/colors.hpp"

void testSwap(){
	int x = 32;
	int y = 2;
	std::cout << CYAN "*********************\n";
	std::cout << x << " : " << y << "\n";
	swap(x, y);
	std::cout << x << " : " << y << "\n";
	std::cout << "---------------------\n";

	std::string x1 = "allo";
	std::string y1 = "Monsieur";
	std::cout << x1 << " : " << y1 << "\n";
	swap(x1, y1);
	std::cout << x1 << " : " << y1 << "\n";
	std::cout << "*********************\n\n" RESET;
}

void testMin(){
	int x = 32;
	int y = 2;
	std::cout << GREEN "*********************\n";
	std::cout << x << " : " << y << std::endl;
	std::cout << "min : " << min(x, y) << std::endl;
	std::cout << "---------------------\n";

	double x1 = 12.76;
	double y1 = 12736.754;
	std::cout << x1 << " : " << y1 << std::endl;
	std::cout << "min : " << min(x1, y1) << std::endl;
	std::cout << "*********************\n\n" RESET;
}

void testMax(){
	int x = 32;
	int y = 2;
	std::cout << MAGENTA "*********************\n";
	std::cout << x << " : " << y << std::endl;
	std::cout << "max : " << max(x, y) << std::endl;
	std::cout << "---------------------\n";

	float x1 = 12.76;
	float y1 = 12736.754;
	std::cout << x1 << " : " << y1 << std::endl;
	std::cout << "max : " << max(x1, y1) << std::endl;
	std::cout << "*********************\n" RESET;
}

int main(void){
	
	testSwap();
	testMin();
	testMax();

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}