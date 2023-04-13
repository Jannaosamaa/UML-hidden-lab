#include "Pizza.h"
using namespace std;

Pizza();
Pizza::Pizza(string PizzaVariety, int PizzaSIze)
{
	Variety = PizzaVariety;
	Size = PizzaSize;
}

void Pizza::setVariety(string PizzaVariety)
{
	Variety = PizzaVariety;
 }
string Pizza::getVariety()
{
	return Variety;
}
void Pizza::setSize(int PizzaSize)
{
	Size = PizzaSize;
}
int Pizza::getSize()
{
	return Size;
}