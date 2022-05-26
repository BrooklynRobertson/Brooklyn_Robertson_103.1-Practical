#pragma once
#include <iostream>
using namespace std;

struct Expenses {
	int date = 0;
	float transport = 0;
	float meals = 0;
	float entertainment = 0;
	float others = 0;


	Expenses(int d, float t, float m, float e, float o) {
		date = d;
		transport = t;
		meals = m;
		entertainment = e;
		others = o;
		float dailyRecorder[10]{
		0,0,0,0,0,0,0,0,0,0
	};
		float weeklyRecorder[10]{
			0,0,0,0,0,0,0,0,0,0
	};
	};


};



Expenses dailyRecorder[10];
Expenses weeklyRecorder[10];
	



void viewReport(Expenses r, int type);
void viewExpenses(Expenses r);
int* recordExpense(Expenses r);
void start();