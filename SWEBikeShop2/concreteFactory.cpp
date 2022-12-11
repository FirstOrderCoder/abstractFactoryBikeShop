#include "abstractFactory.h"
#include "concreteFactory.h"


abstractProductA* cinelliFactory::CreateCarbonFrame()
{
	abstractProductA* pCarbon = new cinelliCarbonFrame();
	return pCarbon;
}
abstractProductA* cinelliFactory::CreateSteelFrame()
{
	abstractProductA* pSteel = new cinelliSteelFrame();
	return pSteel;
}
abstractProductA* cinelliFactory::CreateAluminumFrame()
{
	abstractProductA* pAluminum = new cinelliCarbonFrame();
	return pAluminum;
}
abstractProductB* cinelliFactory::Create46Crank()
{
	abstractProductB* pFSCrank = new cinelliFortySixCrank();
	return pFSCrank;
}
abstractProductB* cinelliFactory::Create50Crank()
{
	abstractProductB* pFCrank = new cinelliFiftyCrank();
	return pFCrank;
}


