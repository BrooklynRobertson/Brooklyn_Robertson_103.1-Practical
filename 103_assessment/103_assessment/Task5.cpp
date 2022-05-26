// 103_assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "task5.h"

void gameSetup() {
	int height = 0;
	int width = 0;
	cout << "Setting up game.......\n\n" << "Please enter height and width for rectangle (max int 10)\n";
	cin >> height;
	
	switch (height) {
	case 0:
		cout << "Cannot be zero\n";
			gameSetup();
		break;
	case 11:
		cout << "Cannot be more than 10...\n";
		gameSetup();
		break;
	}
	cin >> width;
	switch (width) {
	case 0:
		cout << "Cannot be zero\n";
		gameSetup();
		break;
	case 11:
		cout << "Cannot be more than 10...\n";
		gameSetup();
		break;
	default:
		cout << "So far so good......\n";
	}
	if (height == width) {
		cout << "Cannot be a square....... i said RECTANGLE......\n";
		gameSetup();
	}
	

	
	setRectangle(height, width);	
	
	
	heightWidth[0] = height;
	heightWidth[1] = width;
}

void start() {
	int game = 0;
	int score = 0;
	int choice;
	cout << "Choose an option\n\n" << "1. Play\t2. Final Score\t3. Exit\n\n";
	cin >> choice;
	switch (choice) {
	case 1:
		guessShape(game);
		break;
	case 2:
		finalScore(score);
		break;

	case 3:
		cout << "Thanks for playing!!!!";
		break;
	default:
		cout << "unknown option.......\n";
		start();
	}
}

void setRectangle(int h, int w) {

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			rectangle[i][j] = '*';
		}
	}
}

void callSquare() {
	for (int i = 0; i < 7; i++) {
		cout << "\t";
		for (int j = 0; j < 8; j++) {
			square[i][j] = '*';
			cout << square[i][j] << " ";
		}
		cout << "\n";
	}
}

void callTriangle() {
	for (int i = 0; i < 5; i++) {
		cout << "\t";
		for (int j = 0; j <= i; j++) {
			triangle[i][j] = '*';
			cout << triangle[i][j] << " ";
		}
		cout << "\n";
	}
}

void callRectangle() {
	
	for (int i = 0; i < heightWidth[0]; i++) {
		cout << "\t";
		for (int j = 0; j < heightWidth[1]; j++) {
			cout << rectangle[i][j] << " ";
		}
		cout << "\n";
	}
}

//int randShapeCall() {
//	int randGen = rand() % 3 + 1;
//	switch (randGen) {
//	case 1:
//		callSquare();
//		break;
//	case 2:
//		callTriangle();
//		break;
//	case 3:
//		callRectangle();
//		break;
//	default:
//		cout << "Something went wrong...";
//	}
//	return randGen;
//}

int calcScore(int guess, int answer) {
	int score = 0;
	if (guess == answer) {
		cout << "Correct!!!!!!\n";
		score += 10;
		start();
	}
	else {
		cout << "Wrong.....";
	}
	start();
	return score;
}

int guessShape(int g) {
	srand(time(NULL));
	int game = g;
	int guess;
	int randGen = rand() % 3 + 1;
	cout << "Guess the shape:\n";
	switch (randGen) {
	case 1:
		callSquare();
		break;
	case 2:
		callTriangle();
		break;
	case 3:
		callRectangle();
		break;
	default:
		cout << "Something went wrong...";
	}
	cout << "1. Rectangle\n2. Square\n3. Triangle\n 4.None of the above\n";
	cin >> guess;
	game++;
	calcScore(guess, randGen);
	return game;
}

void finalScore(int score) {
	
	cout << "Your final score is " << score;
}
int main() {
	
	
	gameSetup();
	
	callRectangle();
	cout << "\n\n";
	callSquare();
	cout << "\n\n";
	callTriangle();
	int choice = 0;
	//start();	
	
	if (choice == 3) {
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
