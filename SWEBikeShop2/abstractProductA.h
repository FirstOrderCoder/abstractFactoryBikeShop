#pragma once

#include "includesHeaders.h"

//ABSTRACT PRODUCT 

//This is the interface that the client will use to interact with the concrete products

//This abstract product is the Cinelli Bike Frames Product A
class abstractProductA
{
private:
	
protected:
	//Protected data members will go here and they will describe the Cinelli frame attributes.
	double frameprice;
	const std::string frameTypes[4] = { "", "Carbon", "Steel", "Aluminum" };
	int type;
	std::string name;
	std::string serial;
public:
	
	abstractProductA();
	abstractProductA(int t, double price,  const std::string&s);

	virtual ~abstractProductA() {}

	//setters
	virtual void displayFrame() =0;
	
	
};



class cinelliCarbonFrame : public abstractProductA
{
private:
	
public:
	
	
	cinelliCarbonFrame();
	cinelliCarbonFrame(int t, double price, const std::string&s);
	~cinelliCarbonFrame() {}

	void displayFrame();
};

class cinelliSteelFrame : public abstractProductA
{
private:
	
public:
	cinelliSteelFrame();
	cinelliSteelFrame(int t, double price, const std::string&s);
	~cinelliSteelFrame() {}
	
	
	void displayFrame();
};

class cinelliAlumFrame : public abstractProductA
{
private:

public:
	cinelliAlumFrame();
	cinelliAlumFrame(int t, double price, const std::string&s);

	~cinelliAlumFrame() {}

	
	void displayFrame();
};




