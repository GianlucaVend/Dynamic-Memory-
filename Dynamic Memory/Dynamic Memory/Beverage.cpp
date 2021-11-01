#include "Beverage.h"

//Implementation file for Beverage Class

Beverage::Beverage()
{
	cout << "Inside Beverage Default constructor" << endl; 
	mix = new string("No mix");
	assert(mix);
}

Beverage::Beverage(int newQty, string newTypeOfDrink, string newMix)
	:Drink(newQty, newTypeOfDrink) // to call a non-parent constructor
{
	cout << "Inside Beverage non-default constructor" << endl; 
	mix = new string();
	assert(mix);
	setMix(newMix);
}

void Beverage::setMix(string newMix)
{
	*mix = newMix.length() > 0 ? newMix : "no Mix"; 
}

void Beverage::show() const
{
	Drink::show();
	cout << "Mix is = " << mix << endl; 
}