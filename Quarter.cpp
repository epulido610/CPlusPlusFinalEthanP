#include "Quarter.h"
#include <iostream>

string Quarter::getNameCoin()
{
	return "George Washington Quarter";
}
string Quarter::nameMint()
{
	return nameOfMint;
}
string Quarter::getNameMet()
{
	return "90% Silver, 10% copper";
}
int Quarter::getDate()
{
	return 1941;
}
double Quarter::getMeltValue()
{
	return 2.86;
}
double Quarter::getPriceOfCoin()
{
	if (mintChoice = 1)
	{
		price = 3.05;
	}
	else if (mintChoice = 2)
	{
		price = 3.06;
	}
	else if (mintChoice = 3)
	{
		price = 3.04;
	}
	
	return price;
}