

#include<string>
#include<iostream>
#include<fstream>
#include<PizzaBoom.h>
using namespace std

void PizzaBoom::sellPizza(string PizzaVariety, int PizzaSize, int nbSold)
{
	//Check if the pizza exists in the menu
	int index = -1;
	for (int i = 0; i < menu.size(); i++)
	{
		if (menu[i].getVariety() == PizzaVariety && menu[i].getSize() == size)
		{
			index = i;
			break;
		}
		if (index == -1) {
			menu.push_back(Pizza(variety, size));
			quantitySold.push_back(0);
			index = menu.size() - 1;
		}

	}
	quantitySold[index] += nbSold;
}
void PizzaBoom::logSales()
{
	ofstreeam file("Sales.txt");
	for (int i = 0; i < menu.size(); i++)
	{
		file << menu[i].getVariety() << " " << menu[i].getSize() << "inch:" << quantitySold[i] << "Sold\n";
	}
	file.close();
}
void PizzaBoom::displaySalesFromFile()
{
	ifstream file("sales.txt")
		cout << "Sales Report : \n";
	string line;
	while (getline(file, line))
	{
		cout << line << endl;
	}
	file.close();
}
void PizzaBoom::storeInObjectFile()
{
	ofstream file(" menu bin", std::ios::binary);
	for (Pizza pizza : menu)
	{
		file.write ((cahr*)&pizza , sizeof (Pizza))
	}
	file.close();
}
void PizzaBoom::displayMenuBySizeFromFile(const string& filename, int minSize) {
    // Open the file for reading
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error: could not open file " << filename << endl;
        return;
    }

    // Read the menu items from the file and store them in a vector
    vector<Pizza> menu;
    Pizza pizza;
    while (inputFile >> pizza) {
        menu.push_back(pizza);
    }

    // Close the input file
    inputFile.close();

    // Display the menu items whose size is greater than minSize
    cout << "Menu items with size greater than " << minSize << " inches:" << endl;
    for (const Pizza& pizza : menu) {
        if (pizza.getSize() > minSize) {
            cout << pizza << endl;
        }
    }
}
