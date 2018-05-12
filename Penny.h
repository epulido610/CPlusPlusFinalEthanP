#pragma once
#ifndef PENNY_H
#define PENNY_H
#include "Coin.h"

class Penny : public Coin
{
public:
	Penny():Coin() {}
	virtual string getNameCoin();
	virtual string nameMint();
	virtual string getNameMet();
	virtual int getDate();
	virtual double getPriceOfCoin();
	virtual double getMeltValue();
};

#endif