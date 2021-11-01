#include "Beverage.h"

//Client code for module 8

int main()
{
	Beverage* beverageOne = new Beverage(12, "juice", "water"); // call to constructor 
	assert(beverageOne);

	beverageOne->show();


	system("pause");
}