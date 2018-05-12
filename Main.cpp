/*
Ethan Pulido
CS/IS 137
Final Project 1941 Coin Program
*/
#include <iostream>
#include <string>
#include <fstream>
#include "Coin.h"
#include "Quarter.h"
#include "HalfDollar.h"
#include "Dime.h"
#include "Penny.h"

using namespace std;

int main()
{
	Coin coiny;
	Quarter quarter;
	Dime dime;
	HalfDollar halfDollar;
	Penny penny;

	char userChoice = '1';
	int coinChoice, txtReceipt;
	int theCoin = txtReceipt = 0;
	string nam;

	Coin* coins[4];
	coins[0] = &penny;
	coins[1] = &dime;
	coins[2] = &quarter;
	coins[3] = &halfDollar;

	ofstream coinFile;
	coinFile.open("Coin.txt");


	do
	{
		cout << "welcome to the 1941 Coin Program" << endl;
		cout << "Here you will see the price of your coin, the date of your coin " << endl;
		cout << "\nThe mint of the coin as well as the silver melt value " << endl;
		cout << "\nAt the end of the program you will have the option of saving via txt file " << endl;
		cout << "1) to start program " << endl;
		cout << "q) to QUIT!!!! " << endl;
		cin >> userChoice;
		switch (userChoice)
		{
		case '1':

			coiny.setNameMint();
			do 
			{
				cout << "What type of coin do you have from 1941?" << endl;
				cout << "3) Half Dollar  2) Quarter  1) Dime  0) Penny " << endl;
				cin >> coinChoice;
				switch (coinChoice)
				{
				case 1:
					coinChoice = 1;
					break;
				case 2:
					coinChoice = 2;
					break;
				case 3:
					coinChoice = 3;
				default:
					cout << "wrong choice " << endl;
					break;
				}
			} while (coinChoice != 1 && coinChoice != 2 && coinChoice != 3);

			cout << "\nThe price of the " << coins[coinChoice]->getNameCoin() << " is $" << coins[coinChoice]->getPriceOfCoin() << endl;
			cout << "\nThe date of the coin is " << coins[coinChoice]->getDate() << endl;
			cout << "\nThe metal(s) type of a " << coins[coinChoice]->getNameCoin() << " is ";
			cout << " " << coins[coinChoice]->getNameMet() << endl;
			cout << "\nThe melt value of a " << coins[coinChoice]->getNameCoin() << " is $" << coins[coinChoice]->getMeltValue() << endl;;
			cout << "\nThe mint of the coin is " << coiny.getNameMint() << "\n" << endl;

			cout << "Would you like a text file to save the Coin Data? " << endl;
			do
			{
				cout << "\n 1. Yes 2. NO!!!" << endl;
				cin >> txtReceipt;
				switch(txtReceipt)
				{
				case 1:
					coinFile << "\nThe price of the " << coins[coinChoice]->getNameCoin() << " is $" << coins[coinChoice]->getPriceOfCoin() << endl;
					coinFile << "\nThe date of the coin is " << coins[coinChoice]->getDate() << endl;
					coinFile << "\nThe metal(s) type of a " << coins[coinChoice]->getNameCoin() << " is ";
					coinFile << " " << coins[coinChoice]->getNameMet() << endl;
					coinFile << "\nThe melt value of a " << coins[coinChoice]->getNameCoin() << " is $" << coins[coinChoice]->getMeltValue() << endl;;
					coinFile << "\nThe mint of the coin is " << coiny.getNameMint() << "\n" << endl;
					coinFile.close();

					cout << "\n receipt Printed/Saved \n " << endl;
					break;
				case 2:
					cout << "okay \n" << endl;
					break;
				default:
					cout << "WRONG " << endl;
					break;
				}
			} while (txtReceipt != 1 && txtReceipt != 2);


			break;
		case 'q':
			cout << "Peace out boooiiiiiiiiiiiiiiiiiiiiiiiiiiiii " << endl;
			return(0);
			break;
		default:
			cout << "Bad input bro " << endl;
			break;
		}
	} while (userChoice != 1 || userChoice != 'q');

	//system("pause");
	return(0);
}