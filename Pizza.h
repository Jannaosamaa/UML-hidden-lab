#pragma once
#ifndef PIZZA_H
#define PIZZA_H
#include "PizzaBoom.h"
#include<string>
using namespace std;

class Pizza : public PizzaBoom
{
public:
	Pizza();
	Pizza(string PizzaVariety, int PizzaSize);

	void setVariety(string PizzaVariety);
	string getVariety();
	void setSize(int PizzaSize);
	int getSize();

private:
	string Variety;
	int Size;

};
#endif 