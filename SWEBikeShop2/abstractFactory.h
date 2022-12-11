#pragma once

#include "includesHeaders.h"
#include "abstractProductA.h"
#include "abstractProductB.h"

class abstractProductA;
class abstractProductB;
//ABSTRACT FACTORY
//This is considered the "Bike Parts Factory". It is one of the interfaces used in the Abstract Factory Pattern. 
//The other interaces that will interact with the client are the Abstract product interfaces such as our abstractProductA.
//AbstractProductA is the interface for the Cinelli Bike Frames.  

//This class will have more than one concrete class i.e. a concrete factory that focuses on the production of Cinelli Carbon Bike Parts or
//Cinelli Steel bike parts.
class abstractFactory
{

protected:
public:
	virtual ~abstractFactory() {}
	
	
	
	virtual abstractProductA* CreateCarbonFrame() = 0;
	virtual abstractProductA* CreateSteelFrame() = 0;
	virtual abstractProductA* CreateAluminumFrame() = 0;
	virtual abstractProductB* Create46Crank()  = 0;
	virtual abstractProductB* Create50Crank() = 0;
	
	
};





