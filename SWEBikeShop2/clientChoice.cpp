#include "clientChoice.h"
#include <iostream>

//In abstract factory design pattern, a client interacts with interface abstract products and interface abstract products
//This method will take in whatever the user chooses to create and will return a pointer to the abstract product

void clientChoice(int choice)
{
	abstractFactory* pFactory = nullptr;
	abstractProductA* pFrame = nullptr;
	abstractProductB* pCrank = nullptr;

	pFactory = new cinelliFactory;

	if (choice == 1)
	{
		pFrame = pFactory->CreateCarbonFrame();
		pFrame->displayFrame();
	}
	else if (choice == 2)
	{
		pFrame = pFactory->CreateSteelFrame();
		pFrame->displayFrame();
	}
	else if (choice == 3)
	{
		
		pFrame = pFactory->CreateAluminumFrame();
		pFrame->displayFrame();
	}
	else if (choice == 4)
	{
		pCrank = pFactory->Create46Crank();
		pCrank->displayCrank();
	}
	else if (choice == 5)
	{
		pCrank = pFactory->Create50Crank();
		pCrank->displayCrank();
	}


	delete pFrame;
	delete pCrank;
	delete pFactory;
}

