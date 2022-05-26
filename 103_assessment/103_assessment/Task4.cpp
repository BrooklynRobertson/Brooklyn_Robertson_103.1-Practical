// 103_assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "task4.h"
bool gameState(bool x) {
	if (x == true)
		{
			gameRunning = true;
		}
	else {
	gameRunning = false;
	
	}
	
	x = gameRunning;
	return gameRunning;
}
void gameSetup() {
	instruction = "Setting up Hangman........\n\n";
	initialize();
	grid[0][3] = '_'; grid[0][4] = '_'; grid[0][5] = '_';
	grid[1][2] = '/'; grid[2][1]  = '/';
	grid[1][5] = '|'; grid[3][1] = '|'; grid[4][1] = '|'; grid[5][1] = '|'; grid[6][1] = '|';
	grid[7][0] = '-'; grid[7][1] = '-'; grid[7][2] = '-';
	displayGrid();
	playGame();
}

void initialize() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			grid[i][j] = ' ';
		}
	}
}

void hangMan() {
	instruction = "Let's Play Hangman........\n\n";
	grid[2][5] = 'O';
	grid[3][5] = '|'; grid[4][5] = '|';
	grid[3][3] = '\\'; grid[5][5] = '\\';
	grid[5][3] = '/'; grid[3][5] = '/';
	displayGrid();
}

void walkFree() {
	for (int i = 0; i < 5; i++) {
		cout << answer[i];
	}
	instruction = "You won!!!!!!\n\n";
	initialize();
	grid[4][5] = 'O';
	grid[5][5] = '|'; grid[6][5] = '|';
	grid[5][3] = '\\'; grid[5][5] = '\\';
	grid[7][3] = '/'; grid[7][5] = '/';
	displayGrid();
	gameState(false);
}

void deadMan() {
	instruction = "You Lost....\n\n";
	initialize();
	grid[5][5] = 'O';
	grid[3][5] = '|'; grid[4][5] = '|';
	grid[3][4] = '\\'; grid[3][6] = '\\';
	grid[5][4] = '/'; grid[5][6] = '/';
	displayGrid();
	gameState(false);
}

void displayGrid() {
	cout << instruction << "\n";
	for (int i = 0; i < 5; i++) {
		cout << word[i];
	}
	cout << "\n";
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << grid[i][j];
		}
		cout << "\n";
	}
}

void playGame() {
	hangMan();
	if (guessCount < 3) {
		gameState(true);
	}
	
	while (gameRunning) {
cout << "guesses: " << guessCount << "\n";
		guessLetter();
	
	if (guessCount == 3) {
		deadMan();
		cout << "The word was ";
		for (int i = 0; i < 5; i++) {
			cout << answer[i];
		}
		gameState(false);
	}
	}
		
	

}

int guessLetter() {
	cout << "Guess the letter missing: \n";
	cin >> guess;
	guessCount++;
	if (guess == answer[2]) {
		walkFree();
	}
	else {
		cout << "Wrong, try again...\n";
	}
	return guessCount;
} 

int main() {
	gameSetup();
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
