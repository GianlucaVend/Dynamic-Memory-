#include "Drink.h"

//Specification file for Beverage class

class Beverage: public Drink
{
public:
	Beverage(); //default constructor 
	Beverage(int /*qty*/, string /*type of drink*/, string /*mix*/); 
	string getMix() const { return *mix; }
	void setMix(string /*newMix*/); 
	void show() const; 
private:
	string* mix; 
};