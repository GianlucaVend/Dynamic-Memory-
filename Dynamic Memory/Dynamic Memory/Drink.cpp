#include "Drink.h"

//implementation file for drink class

Drink::Drink()
{
	cout << "inside Drink default constructor" << endl; 
	qty = 4; 
	typeOfDrink = new string("water"); 
	assert(typeOfDrink);
}

Drink::Drink(int newQty, string newTypeOfDrink)
{
	cout << "Inside Drink non-default constructor" << endl; 
	setQty(newQty);
	typeOfDrink = new string(newTypeOfDrink);
	assert(typeOfDrink);
}

void Drink::setQty(int newQty)
{
	qty = newQty > 0 && newQty <= 30 ? newQty : 0;
}

void Drink::setTypeOfDrink(string newTypeOfDrink)
{
	*typeOfDrink = newTypeOfDrink; 
}

void Drink::show() const
{
	cout << "Type of drink is = " << *typeOfDrink << endl; 
	cout << "Number of ounces is = " << qty << endl; 
}