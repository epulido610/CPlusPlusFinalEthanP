#pragma once
#ifndef QUARTER_H
#define QUARTER_H
#include "Coin.h"

class Quarter : public Coin
{
public:
	
	Quarter():Coin() {}

	virtual string getNameCoin();
	virtual string nameMint();
	virtual string getNameMet();
	virtual int getDate();
	virtual double getPriceOfCoin();
	virtual double getMeltValue();

};



#endif
