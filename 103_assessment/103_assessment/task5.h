#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


char square[10][10];
char triangle[10][10];
char rectangle[10][10];
int heightWidth[2];

void gameSetup();
void start();
int randShapeCall();
void callSquare();
void callTriangle();
void setRectangle(int h, int w);
void callRectangle();
int calcScore(int guess);
int guessShape(int game);
void finalScore(int score);

