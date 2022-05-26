// 103_assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "task6.h"
#include <string>
void start() {
	Expenses r;
	dailyRecorder[10] = r;
	int type;
	int choice;
	cout << "Personal Expenses Tracker.....\nChoose an option\n\n" << "1. Enter Expense\t2. View Expense\t3. View Report\t4. Exit\n\n";
	cin >> choice;
	switch (choice) {
	case 1:
		recordExpense(r);
		break;
	case 2:
		viewExpenses(r);
		break;

	case 3:
		viewReport(r, choice);
		break;
	case 4:
		cout << "Thanks....Bye......";
		break;
	}
}
void addRecord(Expenses r, int *ptr, int type) {
	Expenses summary(0, 0, 0, 0, 0);
	int choice;
	
	for (int i = 0; i < *ptr; i++) {
		
		summary.transport += r.transport;
		summary.meals += r.meals;
		summary.entertainment += r.entertainment;
		summary.others += r.others;
		weeklyRecorder[i] = summary;
		dailyRecorder[i] = weeklyRecorder[i/7];
	}
	
	start();
}
void viewReport(Expenses r, int type) {
	int choice;
	cout << "would you like to :\n 1. view daily report 2. view weekly report ?\n";
	cin >> choice;
	switch (choice) {
	case 1:
		for (int i = 0; i < 10 ; i++) {
		r = dailyRecorder[i];
			cout << "Your daily expenses: \n" << 
				"\nTransport:\t" << r.transport << 
				"\nMeals:\t" << r.meals <<
				"\nEntertainment:\t" << r.entertainment <<
				"\nOther:\t" << r.others;
		}

		break;
	case 2:
		for (int i = 0; i < 10; i++) {
			r = weeklyRecorder[i/7];
			cout << "Your weekly expenses: \n" <<
				"\nTransport:\t" << r.transport <<
				"\nMeals:\t" << r.meals <<
				"\nEntertainment:\t" << r.entertainment <<
				"\nOther:\t" << r.others;
		}
		break;
	default:
		cout << "Something went wrong.\n";
		viewReport(r, type);
	}
}



void viewExpenses(Expenses r) {
	int type;
	int choice;
	cout << "would you like to :\n 1. view daily report 2. view weekly report ?\n";
	cin >> choice;
	switch (choice) {
	case 1:
		for (int i = 0; i < 10; i++) {
			r = dailyRecorder[i];
			cout << "Your daily expenses: \n" <<
				"\nTransport:\t" << r.transport <<
				"\nMeals:\t" << r.meals <<
				"\nEntertainment:\t" << r.entertainment <<
				"\nOther:\t" << r.others;
		}

		break;
	case 2:
		for (int i = 0; i < 10; i++) {
			r = weeklyRecorder[i / 7];
			cout << "Your weekly expenses: \n" <<
				"\nTransport:\t" << r.transport <<
				"\nMeals:\t" << r.meals <<
				"\nEntertainment:\t" << r.entertainment <<
				"\nOther:\t" << r.others;
		}
		break;
	default:
		cout << "Something went wrong.\n";
		viewReport(r,type);
	}
}

int* recordExpense(Expenses r) {
	int type;
	int recordNum = 0;
	int d;
	float t, m, e, o;
	
	for (int i = 0; i < 3; i++) {
		cout << "1. Daily or 2. Weekly Expense?\n";
		cin >> type;
		switch (type) {
			case 1:
			cout << "Enter day for expenses entry: (1-7) \n";
			cin >> d;
			
				for (int j = 0; j < 4; j++) {
					cout << "Record daily expenses for day: \n" << 
					"Put 0 for expense if none was spent this way\n\n";
					cin >> t; 
					cin >> m; 
					cin >> e; 
					cin >> o;
				}
				
				type = 1;
			break;
			case 2:
			for (int j = 0; j < 4; j++) {
				cout << "Record weekly expenses for day: \n" <<
					"Put 0 for expense if none was spent this way\n\n";
				cin >> t; m; e; o;
			}
			type = 7;
			break;
			default:
				cout << "Something went wrong.....\n";
		}
		
		cout << "Creating record............\n";
		recordNum++;
		Expenses (d, t, m, e, o) = r;
		dailyRecorder[10] = r;
	}
	int* recordPtr = &recordNum;
	addRecord(r, recordPtr, type);
	return recordPtr;
}

int main() {
	
	int choice = 0;
	start();	
	
	if (choice == 4) {
		return 0;
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
