#include"PizzaBoom.h"
#include"Pizza.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

    int main() {
        // Create a PizzaBoom object
        PizzaBoom PizzaBoomObj;


       Pizza menu[3];  // create array of 3 default pizzas
       menu[0].setVariety("Mexican");
       menu[1].setVariety("Vegetarian");
       menu[2].setVariety("Margherita");

       menu[0].setSize(12);
       menu[1].setSize(6);
       menu[2].setSize(9);

        // Sell some pizzas
        PizzaBoomObj.sellPizza("Mexican", 12, 2);
        PizzaBoomObj.sellPizza("Vegetarian", 6, 5);
        PizzaBoomObj.sellPizza("Margherita", 9, 3);

        // Log the sales to a file
        PizzaBoomObj.logSales();

        // Read the sales from the file
        PizzaBoomObj.displaySalesFromFile();

        // Store the menu in an object file
        PizzaBoomObj.storeInObjectFile();

        // Display the menu items whose size is greater than 8 inches
        PizzaBoomObj.displayMenuBySizeFromFile( 8);

 
    }

