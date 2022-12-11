#pragma once
#include "abstractFactory.h"



//This concrete Factory is "Cinelli Bike Carbon Frames" Factory that is inheriting from the abstract factory aka cinelli bike parts factory
class cinelliFactory : public abstractFactory
{
public:
	
	
	virtual ~cinelliFactory() {}
	
	
	 abstractProductA* CreateCarbonFrame();
	 abstractProductA* CreateSteelFrame();
	 abstractProductA* CreateAluminumFrame();
	 abstractProductB* Create46Crank();
	 abstractProductB* Create50Crank();
	
	
private:

	
};



