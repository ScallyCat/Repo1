//***********************************************************************************************************
// Author: Noah LeVangie
// 
//***********************************************************************************************************

#include <iostream>
#include <cstdlib>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <string>
using namespace std;

float stockValue = 0;
int shares = 0;
int numStocks;
float total = 0;

//Values one stock and adds to total portfolio value
float valueStock(int shares, float value);


int main()
{

	while (true) {

		cout << "Shares owned: ";
		cin >> shares;

		if (shares == 0) {
			break;
		}
		//Keeps track of how many unique stocks owned
		numStocks++;
		cout << "Value of stock: ";
		cin >> stockValue;
		valueStock(shares, stockValue);

	}

	total = roundf(total * 100) / 100; //Rounds portfolio value to 2 decimal places
	cout << "\n";
	cout << "Total of " << numStocks << " stocks owned. \n";
	printf("Value of Portfolio = $%.2f\n", total);
	cout << "\n";
	system("pause");
	return 0;
}


float valueStock(int shares, float value) {

	float valueStock = shares * value;
	total += valueStock;
	printf("Stock Value = $%.2f\n", valueStock); //Rounds portfolio value to 2 decimal places
	cout << "\n";
	cout << "\n";
	return 0;

}