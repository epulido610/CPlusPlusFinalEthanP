#pragma once
#ifndef HALFDOLLAR_H
#define HALFDOLLAR_H
#include <string>
using std::string;

#include "Coin.h"

class HalfDollar : public Coin
{
public:
	HalfDollar():Coin() {}

	virtual string getNameCoin();
	virtual string nameMint();
	virtual string getNameMet();
	virtual int getDate();
	virtual double getPriceOfCoin();
	virtual double getMeltValue();


};
#endif