// COS30008 - Ha Duy Anh - 103428029 - Problem Set 1.
// ProblemSet1 - Q1.cpp : This file contains the 'main' function.

#include <iostream>

using namespace std;

string DCam[4] = { "RS Pro with GPS", "Transcend Drive Pro", "H203 1080P", "Pioneer" };
string Branch[3] = { "SJ", "PJ", "KL" };

int UnitSold[4][3], total_gross_sales[3];
int Price[4] = { 730, 850, 150, 350 };
int unitNo[4], highest;
int popular, z[2];

int main() 
{
	int row = sizeof(UnitSold) / sizeof(UnitSold[0]);
	int column = sizeof(UnitSold[0]) / sizeof(row);	

	for (int a = 0; a < row; a++) {
		for (int b = 0; b < column; b++) {
			cout << "Unit sold of " << DCam[a] << " from " << Branch[b] << " branch: ";
			cin >> UnitSold[a][b];
		}
	}

	cout << endl;

	for (int a = 0; a < column; a++) {
		for (int b = 0; b < row; b++) {
			total_gross_sales[a] += (Price[b] * UnitSold[b][a]);
		}
		cout << "Total gross sales for Branch " << Branch[a] << " is: RM " << total_gross_sales[a] << endl;
	}

	if (total_gross_sales[0] > total_gross_sales[1]) {
		if (total_gross_sales[0] > total_gross_sales[2]) {
			highest = 0;
		}
	}

	else {
		if (total_gross_sales[1] > total_gross_sales[2]) {
			highest = 1;
		}
		else {
			highest = 2;
		}
	}

	cout << endl;
	cout << "The highest sales figure is RM " << total_gross_sales[highest] << " by Branch " << Branch[highest] << "." << endl;

	for (int a = 0; a < row; a++) {
		for (int b = 0; b < column; b++) {
			unitNo[a] += UnitSold[a][b];
		}
	}

	if (unitNo[0] > unitNo[1]) {
		z[0] = 0;
	} else {
		z[0] = 1;
	}

	if (unitNo[2] > unitNo[3]) {
		z[1] = 2;
	} else {
		z[1] = 3;
	}

	if (unitNo[z[0]] > unitNo[z[1]]) {
		popular = z[0];
	} else {
		popular = z[1];
	}

	cout << "The popular popular dash cam model is " << DCam[popular] << " with unit sold of " << unitNo[popular] << " units." << endl;
}