#include "Coin.h"
#include <iostream>
using std::cout;

using namespace std;


Coin::Coin()
{
	nameOfCoin = " " ;
	nameOfMint = "mint";
	nameOfMetal = "met";
	dateOfCoin = 1000;
	price = 0;
	mintChoice = 0;
}
void Coin::setNameMint()
{
	do
	{
		cout << "What is the name of the mint? " << endl;
		cout << " 1. Denver 2. San Francisco 3. Pennsylvania " << endl;
		cout << "If you do not know check for the mint mark or select 3. " << endl;
		cin >> mintChoice;

		switch (mintChoice)
		{
		case 1:
			nameOfMint = "Denver";
			break;
		case 2:
			nameOfMint = "San Francisco";
			break;
		case 3:
			nameOfMint = "Pennsyvania";
			break;
		default:
			cout << "You didn't follow the directions smDhhhh " << endl;
			break;

		}
	} while (mintChoice != 1 && mintChoice != 2 && mintChoice != 3);
	

}
double Coin::getMeltValue()
{
	return meltValue;
}
string Coin::getNameCoin()
{

	return nameOfCoin;
}
string Coin::getNameMint()
{

	return this -> nameOfMint;
}
string Coin::getNameMet()
{
	return nameOfMetal;
}
int Coin::getDate()
{
	return dateOfCoin;
}
double Coin::getPriceOfCoin()
{
	return price;
}
