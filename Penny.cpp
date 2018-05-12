#include <iostream>
#include "Penny.h"

string Penny::getNameCoin()
{
	return "Abraham Lincoln cent";
}
string Penny::nameMint()
{
	return nameOfMint;
}
double Penny::getMeltValue()
{
	return 0;
}
string Penny::getNameMet()
{
	return "0% Silver";
}
int Penny::getDate()
{
	return 1941;
}
double Penny::getPriceOfCoin()
{
	if (mintChoice = 1)
	{
		price = 0.20;
	}
	else if (mintChoice = 2)
	{
		price = 0.30;
	}
	else if (mintChoice = 3)
	{
		price = 0.20;
	}

	return price;
}