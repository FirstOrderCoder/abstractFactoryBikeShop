#pragma once
#include "includesHeaders.h"

//PRODUCT B are the cinelli bike cranksets

class abstractProductB
{
private:

protected:
	//Protected data members will go here and they will describe the Cinelli crank attributes.
	double crankprice;
	std::string name;
	std::string serial;
public:

	abstractProductB();
	abstractProductB( double price, const std::string& name, const std::string& s);

	virtual ~abstractProductB() {}

	//setters
	virtual void displayCrank() = 0;


};



class cinelliFortySixCrank : public abstractProductB
{
private:

	
public:


	cinelliFortySixCrank();
	cinelliFortySixCrank(double price, const std::string& name, const std::string& s);
	~cinelliFortySixCrank() {}

	void displayCrank();
};

class cinelliFiftyCrank : public abstractProductB
{
private:
	
public:
	cinelliFiftyCrank();
	cinelliFiftyCrank(double price, const std::string& name, const std::string& s);
	~cinelliFiftyCrank() {}


	void displayCrank();
};


