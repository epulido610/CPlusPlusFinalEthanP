#include "Dime.h"
#include <iostream>

using namespace std;


string Dime::getNameCoin()
{
	return "Mercury Dime" ;
}
string Dime::nameMint()
{
	return this -> nameOfMint;
}
string Dime::getNameMet()
{
	return "90% Silver, 10% copper";
}
int Dime::getDate()
{
	return 1941;
}
double Dime::getPriceOfCoin()
{
	if (mintChoice = 1)
	{
		price = 1.45;
	}
	else if (mintChoice = 2)
	{
		price = 1.46;
	}
	else if (mintChoice = 3)
	{
		price = 1.40;
	}
	return price;
}
double Dime::getMeltValue()
{
	return 1.14;
}