#pragma once
#include <iostream>
#include <string>
using namespace std;

// one to draw a line, create game?
// one to draw the hangman,
//  one to draw a Walkman, 
// one to invert the hangman, lost
// and another one to play.guess


char word[5] = {'p','a','_','t','s'};
char answer[5] = { 'p', 'a', 'n', 't', 's' };
int guessCount = 0;
char guess;
char grid[8][8];
string instruction;
bool gameRunning;

void initialize();

//function to draw line 
//function without parameters
void gameSetup();

//function with return value
bool gameState(bool x);

//function to draw hangman
void hangMan();

//function to draw walkman
void walkFree();

//function to invert hangman
void deadMan();

//function to display grid
void displayGrid();

//function to play
//function without return value
void playGame();

//function with parameters
//assigns return value to variable (counter)
int guessLetter();
