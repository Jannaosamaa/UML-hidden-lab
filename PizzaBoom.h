#pragma once
#ifndef PIZZABOOM_H
#define PIZZABOOM_H
#include"Pizza.h"
class PizzaBoom 
{
public:

	PizzaBoom();
	PizzaBoom(int PizzaSize);

	void sellPizza(string PizzaVariety, int PizzaSize, int PizzaSold);
	void logSales( );
	void displaySalesFromFile();
	void storeInObjectFile();
	void displayMenuBySizeFromFile(int minSize);
	Pizza menu[3];

private:

	int index;
	
	int quantitySold[100];
};






#endif 