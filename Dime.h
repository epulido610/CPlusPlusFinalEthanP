#pragma once
#ifndef DIME_H
#define Dime_H
#include "Coin.h"

class Dime : public Coin
{
public:
	Dime():Coin(){}

	virtual string getNameCoin();
	virtual string nameMint(); 
	virtual string getNameMet();
	virtual int getDate(); 
	virtual double getPriceOfCoin();
	virtual double getMeltValue();


	double dimePrice;

};

#endif