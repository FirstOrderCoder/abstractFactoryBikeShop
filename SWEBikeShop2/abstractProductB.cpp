#include "abstractProductB.h"



abstractProductB::abstractProductB()
{

	crankprice = 0.0;
	serial = "";
}

abstractProductB::abstractProductB(double price, const std::string& name, const std::string& s) : crankprice(price), name(name), serial(s) {}


void abstractProductB::displayCrank()
{

	std::cout << "Crank price: " << crankprice << std::endl;
	std::cout << "Crank Serial Number: " << serial << std::endl;

}

//CINELLI 46 TOOTH CRANKSET
cinelliFortySixCrank::cinelliFortySixCrank()
{
	int randomNumber = rand() % 2000 + 1;
	char firstLetter = 'A' + rand() % 26;
	
	crankprice = 67.89;
	serial = firstLetter + std::to_string(randomNumber);

}
cinelliFortySixCrank::cinelliFortySixCrank( double price, const std::string& n, const std::string& s) : abstractProductB( price, n, s) {}


void cinelliFortySixCrank::displayCrank()
{

	std::cout << "Crank price:$ " << crankprice << std::endl;
	std::cout << "Crank Serial Number: " << serial << std::endl;

}

//CINELLI 50 TOOTH CRANKSET
cinelliFiftyCrank::cinelliFiftyCrank()
{

	int randomSteel = rand() % 2000 + 1;
	char steelLetter = 'B' + rand() % 26;
	
	crankprice = 139.81;
	serial = steelLetter + std::to_string(randomSteel);
}
cinelliFiftyCrank::cinelliFiftyCrank(double price, const std::string& n, const std::string& s) : abstractProductB(price, n, s) {}


void cinelliFiftyCrank::displayCrank()
{

	std::cout << "Crank price: $ " << crankprice << std::endl;
	std::cout << "Crank Serial Number: " << serial << std::endl;

}