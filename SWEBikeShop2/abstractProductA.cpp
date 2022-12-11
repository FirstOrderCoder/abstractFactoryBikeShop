#include "abstractProductA.h"


abstractProductA::abstractProductA()
{
	
	frameprice = 0.0;
	serial = "";
	type= 0;
	
}

abstractProductA::abstractProductA(int t, double price, const std::string&s) : type(t), frameprice(price),  serial(s) {}


void abstractProductA::displayFrame()
{
	
	std::cout << "Frame price: " << frameprice << std::endl;
	std::cout << "Frame Serial Number: " << serial << std::endl;
	
}

//CINELLI CARBON FRAME
cinelliCarbonFrame::cinelliCarbonFrame()
{
	int randomNumber = rand() % 2000 + 1;
	char firstLetter = 'A' + rand() % 26;
	type = 1;
	name = "Cinelli Zydeco";
	frameprice = 1453.56;
	serial = firstLetter + std::to_string(randomNumber);
	
}
cinelliCarbonFrame::cinelliCarbonFrame(int t, double price, const std::string&s) : abstractProductA(t, price, s) {}


void cinelliCarbonFrame::displayFrame()
{
	
	std::cout << "Frame price: " << frameprice << std::endl;
	std::cout << "Frame Serial Number: " << serial << std::endl;

}

//CINELLI STEEL FRAME
cinelliSteelFrame::cinelliSteelFrame()
{

	int randomSteel = rand() % 2000 + 1;
	char steelLetter = 'B' + rand() % 26;
	type = 2;
	name = "Cinelli Estrada";
	frameprice = 1234.56;
	serial = steelLetter + std::to_string(randomSteel);
}
cinelliSteelFrame::cinelliSteelFrame(int t, double price, const std::string& s) : abstractProductA(t, price, s) {}


void cinelliSteelFrame::displayFrame()
{

	std::cout << "Frame price: " << frameprice << std::endl;
	std::cout << "Frame Serial Number: " << serial << std::endl;

}
//CINELLI ALUMINUM FRAME
cinelliAlumFrame::cinelliAlumFrame()
{
	int randomAlum = rand() % 2000 + 1;
	char alumLetter = 'A' + rand() % 26;
	type = 3;
	name = "Cinelli Colnago ";
	frameprice = 980.34;
	serial = alumLetter + std::to_string(randomAlum);
}
cinelliAlumFrame::cinelliAlumFrame(int t, double price, const std::string& s) : abstractProductA(t, price, s) {}


void cinelliAlumFrame::displayFrame()
{
	std::cout << "Frame price: " << frameprice << std::endl;
	std::cout << "Frame Serial Number: " << serial << std::endl;

}
