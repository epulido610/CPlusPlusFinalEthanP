#pragma once
#ifndef COIN_H
#define COIN_H
#include <iostream>
#include <string>
using std::string;

using namespace std;

class Coin
{

public:

	Coin(); 
	virtual string getNameCoin();
	void setNameMint();
	virtual string getNameMint();
	virtual string getNameMet();
	virtual int getDate();
	virtual double getPriceOfCoin();
	virtual double getMeltValue();

	string nameOfCoin, nameOfMint, nameOfMetal;
	int dateOfCoin, mintChoice;
	double price, meltValue;

};
#endif