#include "HalfDollar.h"
#include <iostream>

string HalfDollar::getNameCoin()
{
	return "Walking Liberty Half Dollar";
}
string HalfDollar::nameMint()
{
	return nameOfMint;
}
string HalfDollar::getNameMet()
{
	return "90% Silver, 10% copper";
}
int HalfDollar::getDate()
{
	return 1941;
}
double HalfDollar::getMeltValue()
{
	return 5.72;
}
double HalfDollar::getPriceOfCoin()
{
	if (mintChoice = 1)
	{
		price = 16.00;
	}
	else if (mintChoice = 2)
	{
		price = 16.00;
	}
	else if (mintChoice = 3)
	{
		price = 17.00;
	}

	return price;
}