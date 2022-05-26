#pragma once
#include <iostream>
#include <cctype>
#include <string>
using namespace std;


struct soccer {
    int playerNumber;
    float topSpeed;
    char positionType;
    enum positions {
    goalkeeper,
    midfielder,
    striker,
    winger,
    defender
} position;
string enumToString(positions position) {
    string positionStr;
    switch (position) {
    case goalkeeper:
        positionStr = "Goalkeeper";
        break;
    case midfielder:
        positionStr = "Midfielder";
        break;
    case striker:
        positionStr = "Striker";
        break;
    case winger:
        positionStr = "Winger";
        break;
    case defender:
        positionStr = "Defender";
        break;
    default:
        cout << "Something went wrong with switching......";
        break;
    }
   
    return positionStr;
}
};

soccer player1;
soccer player2;







void create(soccer player);
void display(soccer player);


//Write a program so that the user enters three items of information for each of two players : 
// a player number, 
// the player's top speed and 
// the player's position type.
// 
//For player’s position type, allow user to specify a type by entering its first letter(‘g’, ’m’, ’s’, ’w’, and so on) 
// then stores the type chosen as a value of a variable of type enum position, 
// and finally displays the complete word for this type.
// 
//The program should store this information in two variables of type players, and then display their contents.

