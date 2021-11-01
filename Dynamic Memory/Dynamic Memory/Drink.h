#include <iostream>
#include <string>
#include <cassert>
using namespace std; 

//specification file for drink class 

class Drink
{
public:
	Drink();
	Drink(int /*ounces*/, string /*type of drink*/);
	int getQty() const { return qty; }
	string getTypeOfDrink() const { return *typeOfDrink; }
	void setQty(int /*ounces*/);
	void setTypeOfDrink(string /*type of drink*/);
	void show() const; 

protected:     //accessible inside the same class or derived classes
	int qty;
	string* typeOfDrink;
};