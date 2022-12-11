#include "clientChoice.h"
#include "includesHeaders.h"

/* 

* This program implements the abstract factory design pattern to provide the client a way to purchase frames and receive a total after they are done choosing.
* This type of design pattern achieves a low coupling  because the client does not get access to how the products are implemented.
* 
*/

int main()
{
	//Random number generator in main so that every instance of a factory gives a new serial number to a new frame.
	srand((unsigned)time(NULL));
	
	
	bool exit = false;
	double carbon = 1453.56, steel = 1234.56, alum = 980.34, fortysixCrank = 67.89, fiftyCrank = 139.81;
	double total = 0;
	std::cout << "**************You are now viewing our Cinelli Bicycle Frames and Cranksets *****************" << std::endl;
	
	do
	{
		int viewClient;
		
		
		std::cout << "Please choose a frame type: " << std::endl;
		std::cout << "1. Carbon Frame" << std::endl;
		std::cout << "2. Steel Frame" << std::endl;
		std::cout << "3. Aluminum Frame" << std::endl;
		std::cout << "4. 46 tooth Crank" << std::endl;
		std::cout << "5. 50 tooth Crank" << std::endl;
		std::cout << "6. Exit" << std::endl;
		std::cin >> viewClient;
		if (viewClient == 6)
		{
			exit = true;
			break;
		}
		else if (viewClient <= 0 || viewClient > 6)
		{
			std::cout << "Invalid choice, please try again" << std::endl;
			std::cout << "\n";
			continue;
		}
		
		int products;
		
		std::cout << "Enter quantity you wish to purchase: " << std::endl;
		std::cin >> products;
		for (int i = 0; i < products; i++)
		{
			std::cout << "Details of item: " << i+1 << std::endl;
			std::cout << "\n";
			clientChoice(viewClient);
			std::cout << "\n";
		}
		if (viewClient == 1)
		{
			total += carbon * products;
		}
		else if (viewClient == 2)
		{
			total += steel * products;
		}
		else if (viewClient == 3)
		{
			total += alum * products;
		}
		else if (viewClient == 4)
		{
			total += fortysixCrank * products;
		}
		else if (viewClient == 5)
		{
			total += fiftyCrank * products;
		}

		
		std::cout << "\n";
		std::cout << "Would you like to view other Cinelli items for purchase? (y/n)" << std::endl;
		char choice;
		std::cin >> choice;
		if (choice == 'n' || choice == 'N')
		{
			exit = true;
			break;
		}
	
		
		
	} while (exit == false);
	
	std::cout << "Your total is: $ " << total << std::endl;
	
}